#include <stdio.h>

void checkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}

int main()
{
    char ch;

    scanf("%c", &ch);

    checkVowel(ch);

    return 0;
}