#include <stdio.h>

int reverse_number_iterative(int x);

int main(void)
{
    // 22

    int original = -251;

    int reversed = reverse_number_iterative(-251);

    printf("Original: %d\nReversed: %d\n", original, reversed);

    return 0;
}

int reverse_number_iterative(int x)
{
    if (x == 0 || x / 10 == 0)
        return x;

    int reversed, remainder;

    reversed = 0;
    remainder = 0;

    while (x != 0)
    {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }

    return reversed;
}