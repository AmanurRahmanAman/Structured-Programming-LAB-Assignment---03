#include <stdio.h>

int diff(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", diff(a, b));

    return 0;
}