#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

int pop();
void push(int value);

int main(void)
{
    char ch;

    printf("Enter an RPN expression(enter 'e' to exit): ");

    while ((ch = getchar()) != EOF)
    {
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            int b = pop();
            int a = pop();
            int result;

            switch (ch)
            {
                case '+': 
                    result = a + b; break;
                case '-': 
                    result = a - b; break;
                case '*': 
                    result = a * b; break;
                case '/': 
                    result = a / b; break;
                case '^':
                {
                    result = 1;
                    for (int i = 0; i < b; i++)
                    {
                        result *= a;
                    }
                    break;
                }
            }
            push(result);
        }
        else if (ch == '=')
        {
            int result = pop();
            
            printf("Value: %d\n", result);
            top = 0;
            
            printf("Enter an RPN expression: ");
        }
        else if (ch == ' ' || ch == '\n')
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
void push(int value)
{
    if (top >= STACK_SIZE)
    {
        printf("Expression is too complex\n");
        exit(1);
    }
    stack[top++] = value;
}
int pop()
{
    if (top <= 0)
    {
        printf("Not enough operands in expression\n");
        exit(1);
    }
    return stack[--top];
}