#include <stdio.h>

int prime(int n)
{

    int flag = 0;
    if (n <= 1)
    {
        printf("Neither prime or composite\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is composite\n", n);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime\n", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    prime(n);

    return 0;
}