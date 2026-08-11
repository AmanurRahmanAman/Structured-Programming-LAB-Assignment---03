#include <stdio.h>

int larger(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", larger(a, b));

    return 0;
}