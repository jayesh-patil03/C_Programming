#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeSum
//  Input           : integer, integer
//  Output          : integer
//  Description     : WAP which accept range from user and display sum of all numbers in the range.
//  Date            : 04/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int Sum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd) 
    { 
        return -1; 
    } 

    for(iCnt = iStart; iCnt <= iEnd; iCnt++) 
    { 
        Sum = Sum + iCnt;  
    } 

    return Sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Sum of numbers in Range is : %d\n", iRet); 
    }

    return EXIT_SUCCESS;
}