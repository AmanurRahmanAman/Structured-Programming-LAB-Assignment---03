#include <stdio.h>

int main()
{

    int digit = 2;

    for (int i = 1; digit <= 256; i++)
    {
        printf("%d ", digit);
        digit = digit * 2;
    }

    return 0;
}