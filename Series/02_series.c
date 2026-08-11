#include <stdio.h>

int main()
{

    int digit = 1;

    for (int i = 1; digit <= 40; i++)
    {
        printf("%d ", digit);
        digit = digit + 3;
    }

    return 0;
}