#include <stdio.h>

int smaller(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", smaller(a, b));

    return 0;
}