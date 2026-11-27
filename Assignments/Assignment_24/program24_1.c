#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Chkchar
//  Input           : Char aaray (String)
//  Output          : Boolean
//  Description     : WAP which accepts String from user and accept one character. 
//                    check whether that character present in string or not.
//  Date            : 27/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : jayesh
    Character : e
    output : TRUE

    Input : Marvellous
    character : x
    Output : False
*/

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;

}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);               // space before %c is important to skip one ENTER becoz of previous input

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not found");
    }
    

    return EXIT_SUCCESS;
}