#include <stdio.h>

int reverse(int n)
{
    int digit, rev = 0;

    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        rev = rev * 10 + digit;
    }

    return rev;
}

int main()
{
    long long n;

    scanf("%d", &n);

    printf("%d\n", reverse(n));

    return 0;
}