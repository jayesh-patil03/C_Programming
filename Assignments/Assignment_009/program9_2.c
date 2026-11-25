#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : oddFactorial
//  Input           : Integer
//  Output          : Integer
//  Description     : convert currency from USD to INR
//  Date            : 31/10/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    int iValue = 0;

    iValue = iNo * 70;

    return iValue;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}