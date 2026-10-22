#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a'||cValue == 'e'||cValue == 'i'||cValue == 'o'|| cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(tolower(cValue));

    if(bRet == 1)
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Normal Character");
    }

    return EXIT_SUCCESS;
}