#include "stdio.h"

int main()
{
    int spaceTabNewLineCount = 0;

    int currentCharacter = 0;
    while ((currentCharacter = getchar()) != EOF)
    {
        if (currentCharacter == ' ' || currentCharacter == '\t' || currentCharacter == '\n')
        {
            ++spaceTabNewLineCount;
        }
    }

    printf("\nCount: %d", spaceTabNewLineCount);

    return 1;
}