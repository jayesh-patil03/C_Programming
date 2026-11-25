#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Strup
//  Input           : Char aaray (String)
//  Output          : void
//  Description     : WAP which accepts String from user and convert it into Uppercase.
//  Date            : 27/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : Jayesh PATIL
    
    Output : JAYESH PATIL
*/

void Strup(char *str)
{
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
    
}

int main()
{
    char arr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    Strup(arr);

    printf("Modified String is : %s", arr);

    return EXIT_SUCCESS;
}