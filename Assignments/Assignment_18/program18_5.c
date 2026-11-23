#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer, integer
//  Output          : void
//  Description     : WAP which accepts number of rows and number of cols and print the given pattern.
//  Date            : 24/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    pattern :
                1   2   3   4
                1   @   @   4
                1   @   @   4
                1   2   3   4
*/

void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t", j);
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