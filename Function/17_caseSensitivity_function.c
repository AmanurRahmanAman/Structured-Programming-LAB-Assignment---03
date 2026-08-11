#include <stdio.h>

void checkCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");
}

int main()
{
    char ch;

    scanf("%c", &ch);

    checkCharacter(ch);

    return 0;
}