#include <stdio.h>
#define LEN 10 

int main() {
    int nums[LEN];
    int maxSum = 0;
    int maxNum = 0;

    printf("Enter %d three-digit numbers:\n", LEN);

    for (int i = 0; i < LEN; i++)
    {
        int num;
        while (1)
        {
            printf("%d: ", i + 1);
            scanf_s("%d", &num);

            if (num >= 100 && num <= 999)
            {
                nums[i] = num;
                break;
            }
            else
            {
                printf("Incorrect number! Must be three-digit.\n");
            }
        }
    }

    for (int i = 0; i < LEN; i++)
    {
        int sum = 0;
        int temp = nums[i];

        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            maxNum = nums[i];
        }
    }

    printf("The maximum sum of digits is: %d (from number %d)\n", maxSum, maxNum);

    return 0;
}
