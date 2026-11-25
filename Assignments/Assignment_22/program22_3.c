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
                1   #   2   #   3   #   4             
*/

void Pattern(int iRow)
{
    for(int i = 1; i <= iRow; i++)
    {
        printf("%d\t", i);
        printf("*\t");
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