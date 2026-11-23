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
                -1  -2  -3  -4  -5
                1   2   3   4   5
                -1  -2  -3  -4  -5
*/

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    char ch = '\0';

    for(int i = 0; i < iRow; i++)
    {  
        iCnt = 1;
        ch = 'a';
        for(int j = 0; j < iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", iCnt);
                iCnt++;
            }
            else
            {
                printf("%d\t", -iCnt);
                iCnt++;
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