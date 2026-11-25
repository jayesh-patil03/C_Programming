// check character type without using in built library function.
 
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c is an Uppercase Alphabet.\n", cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c is Lowercase Alphabet.\n", cValue);
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("%c is Digit.\n", cValue);
    }
    else
    {
        printf("%c is Special character.\n", cValue);
    }
}

int main()
{
    char cValue = 0;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}