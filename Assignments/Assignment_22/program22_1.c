#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer
//  Output          : void
//  Description     : WAP which accepts number of rows and print the given pattern.
//  Date            : 26/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    pattern :
                A   B   C   D   E             
*/

void Pattern(int iRow)
{
    char ch = '\0';

    ch = 'A';
    for(int i = 1; i <= iRow; i++)
    {
        printf("%c\t", ch);
        ch++;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter Number of rows : \n");
    scanf("%d", &iValue1);

    Pattern(iValue1);


    return EXIT_SUCCESS;
}