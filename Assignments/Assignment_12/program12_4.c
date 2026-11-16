#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountFour
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and count frequency of 4 in it.
//  Date            : 04/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{

    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo/10;
    }

    return iCount;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Count of 4 is : %d", iRet);


    return EXIT_SUCCESS;
}