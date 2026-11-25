#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Input           : Char aaray (String)
//  Output          : void
//  Description     : WAP which accepts String from user and display only digit from the string.
//  Date            : 27/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : Jayesh94 PAtil22
    
    Output : 9422
*/

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);          
        }
        
        str++;
    }
    
}

int main()
{
    char arr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    printf("Modified String is : %s", arr);

    return EXIT_SUCCESS;
}