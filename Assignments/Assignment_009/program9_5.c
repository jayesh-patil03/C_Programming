#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FactorialDiff
//  Input           : Integer
//  Output          : Integer
//  Description     : Find difference between even and odd factorial
//  Date            : 01/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////


int FactorialDiff(int iNo)
{
    int iCnt = 0, iEven = 1, iOdd = 1;

    // Convert negative values into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even and odd factorial : %d\n", iRet);


    return EXIT_SUCCESS;
}