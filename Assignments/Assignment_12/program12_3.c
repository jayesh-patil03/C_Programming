#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountTwo
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and count frequency of 2 in it.
//  Date            : 04/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{

    int iValue = 0, bRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);

    printf("Count of 2 in number is : %d", bRet);

    return EXIT_SUCCESS;
}