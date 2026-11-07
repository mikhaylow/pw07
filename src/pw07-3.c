#include <stdio.h>

double calc(double a, double b);

int main(void)
{
    // 12

    double a, b, result;

    a = 0.0;
    b = 0.0;
    result = 0.0;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        result = calc(a, b);
        printf("Result: %.4lf\n", result);
    }

    return 0;
}

double calc(double a, double b)
{
    double result = (a - b) / (a + b);

    if (result < 0)
    {
        return result * -1;
    }
    
    return result;
}