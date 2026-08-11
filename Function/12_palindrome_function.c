#include <stdio.h>

int reverse(int n)
{

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
}

int palindrome(int n)
{
    if (n == reverse(n))
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}