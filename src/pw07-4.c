#include <stdio.h>

void my_remainder(int *a, int *b);

int main(void)
{
    // 18

    int a, b;

    a = 0;
    b = 0;

    printf("Enter two numbers\n");

    if (scanf("%d %d", &a, &b) != 2)
        return -1;

    int *p_a = &a;
    int *p_b = &b;

    printf("Pointer a: %d\nPointer b: %d\n", *p_a, *p_b);

    my_remainder(p_a, p_b);

    printf("Pointer a: %d\nPointer b: %d\n", *p_a, *p_b);

    return 0;
}

void my_remainder(int *a, int *b)
{
    int result = 0;

    if (*a > *b)
        result = *a % *b;

    else
        result = *b % *a;

    *a = result;
    *b = result;
}