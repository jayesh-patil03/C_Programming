#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Input           : Char aaray (String)
//  Output          : void
//  Description     : WAP which accepts String from user and count number of whitespaces.
//  Date            : 27/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : jayesh
    output : 0

    Input : Jayesh94 PAtil22
    Output : 1
*/

int CountWhite(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        if (*str == ' ')
        {
            count++;
        }
        str++;
        
    }
    return count;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}