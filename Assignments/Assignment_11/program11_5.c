#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplayRev
//  Input           : integer, integer
//  Output          : void
//  Description     : Display Range of Numbers in reverse order.
//  Date            : 04/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Output is : \t");

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t", iCnt);
        }
    }
    else
    {
        printf("Invalid Range");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}