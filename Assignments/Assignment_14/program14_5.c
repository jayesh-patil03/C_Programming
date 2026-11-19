#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Input           : integer
//  Output          : Integer
//  Description     : WAP which accepts number from user and Return difference summation of non factors and factors.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int i = 0, iFactSum = 0, iNonFactSum = 0;

    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("difference of summation : %d", iRet);

    return EXIT_SUCCESS;
}