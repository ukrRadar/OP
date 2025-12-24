#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 3000

int main(int argc, char *argv[])
{
    int j = 0;

    char buffer[MAX_BUFFER_SIZE];
    char character;
    
    char characterToFind = argv[1][0];
    FILE *text = fopen(argv[2], "r");
    
    while(fgets(buffer, sizeof(buffer), text) != NULL)
    {
        j = 0;
        
        while( (character = buffer[j] ) != '\0')
        {
            if(character == characterToFind )
            {
                printf("%s", buffer);
                break;        
            }
            j++;
        }
    }
    fclose(text);
}