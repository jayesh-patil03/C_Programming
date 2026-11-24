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
                *   *   *   #
                *   *   #   @
                *   #   @   @
                #   @   @   @
*/

void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid input: Rows and columns must be equal.\n");
        return;
    }

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            if(i+j == (iCol-1))
            {
                printf("#\t");
            }
            else if((i + j) < (iCol - 1))
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
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