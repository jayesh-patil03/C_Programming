#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MultiDigit
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and return Multiplication of all digits.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int MultiDigit(int iNo)
{
    int iDigit = 0, iCount = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 0)
        {
            iCount = iCount * iDigit;   // business Logic
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
     int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultiDigit(iValue);

    printf("Multiplication of all digits : %d", iRet);

    return EXIT_SUCCESS;
}