#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Input           : integer
//  Output          : Integer
//  Description     : WAP which accepts number from user and Return summation of all non factors.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0, iCount = 0;

    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            iCount = iCount + i;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non fact number is : %d", iRet);

    return EXIT_SUCCESS;
}