#include <stdio.h>

int main()
{
    int n;
    int digit = 1;
    int difference = 4;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", digit);

        digit = digit + difference;
        difference = difference + 2;
    }

    return 0;
}