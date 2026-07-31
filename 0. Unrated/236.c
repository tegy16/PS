#include <stdio.h>

int func(int n)
{
    if (n == 0)
        return 1;

    int digit = n % 10;

    if (digit == 0)
        return func(n / 10);

    return digit * func(n / 10);
}

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", func(a * b * c));

    return 0;
}