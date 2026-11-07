#include <stdio.h>

int main(void)
{
    // 6

    char ch = '0';

    unsigned int count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '.' || ch == '!' || ch == '?')
        {
            count++;
        }
    }

    printf("Number of sentences: %u\n", count);
    
    return 0;
}