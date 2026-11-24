#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer, integer
//  Output          : void
//  Description     : WAP which accepts number of rows and number of cols and print the given pattern.
//  Date            : 25/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    pattern :
                *
                *   *
                *   *   *
                *   *   *   *
*/

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number of rows and cols : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}