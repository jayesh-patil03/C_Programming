#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer, integer
//  Output          : void
//  Description     : WAP which accepts number of rows and number of cols and print the given pattern.
//  Date            : 23/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    pattern :
                1   2   3   4
                5   6   7   8
                9   10  11  12
*/

void Pattern(int iRow, int iCols)
{
    int i = 0, j = 0;
    int iCnt = 0;
    
    iCnt = 1;
    for(i = iRow; i > 0; i--)
    {   
        for(j = 1; j <= iCols; j++)
        {
            printf("%d\t", iCnt);
            iCnt++;   
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and cols : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}