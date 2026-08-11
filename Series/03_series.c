#include <stdio.h>

int main()
{
    int digit = 1;

    for (int i = 1; digit <= 40; i++)
    {
        if (i % 2 == 0)
            printf("-%d ", digit);
        else
            printf("%d ", digit);

        digit = digit + 3;
    }

    return 0;
}