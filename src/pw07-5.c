#include <stdio.h>

int reverse_number_iterative(int x);
int reverse_number_recursive(int x, int rev);

int main(void)
{
    // 22

    int original, rev, rev_iterative, rev_recursive;

    original = 0;
    rev = 0;
    rev_iterative = 0;
    rev_recursive = 0;

    if (scanf("%d", &original) != 1)
        return -1;

    rev_iterative = reverse_number_iterative(original);

    printf("Original: %d\nReversed: %d\n", original, rev_iterative);

    rev_recursive = reverse_number_recursive(original, rev);

    printf("Original: %d\nReversed: %d\n", original, rev_recursive);

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

int reverse_number_recursive(int x, int rev)
{
    if (x == 0)
    {
        return rev;
    }

    return reverse_number_recursive(x / 10, rev * 10 + x % 10);
}
