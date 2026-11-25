#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Strlwrx
//  Input           : Char aaray (String)
//  Output          : void
//  Description     : WAP which accepts String from user and convert it into lowercase.
//  Date            : 27/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : Jayesh PATIL
    
    Output : jayesh patil
*/

void Strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' )
        { 
            *str = *str + 32;
        }

        str++;
        
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s", arr);

    Strlwrx(arr);

    printf("modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}