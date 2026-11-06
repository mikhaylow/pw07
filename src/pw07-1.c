#include <stdio.h>

char change_letter_case(char c);
int my_isalpha(char c);

int main(void)
{
    // 16

    char ch, new_letter;

    ch = '0';
    new_letter = '0';

    while ((ch = getchar()) != EOF)
    {
        if (my_isalpha(ch))
        {
            new_letter = change_letter_case(ch);
            putchar(new_letter);
            continue;
        }
        putchar(ch);
    }

    return 0;
}

char change_letter_case(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;

    else if (c >= 'a' && c <= 'z')
        return c - 32;

    return 0;
}

int my_isalpha(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}