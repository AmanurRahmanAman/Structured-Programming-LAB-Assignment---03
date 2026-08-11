#include <stdio.h>

void checkNumber(int n)
{
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    checkNumber(n);

    return 0;
}