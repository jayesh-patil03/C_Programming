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
                1   2   3   4   5
                2   3   4   5   6
                3   4   5   6   7
                4   5   6   7   8
*/

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    

    for(int i = 0; i < iRow; i++)
    {  
        iCnt = i;
        for(int j = 0; j < iCol; j++)
        {
            printf("%d\t", iCnt);
            iCnt++;
        }
        printf("\n\n");
    }

    // int i = 0, j = 0;

    // for(i = 0; i < iRow; i++)
    // { 
    //     for(j = 0; j < iCols; j++)
    //     {
    //         printf("%d\t", i + j + 1);
    //     }
    //     printf("\n\n");
    // }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number of rows and cols : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}