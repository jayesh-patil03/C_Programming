#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountDiff
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and return Multiplication of all digits.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, EvenSum = 0, OddSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            EvenSum = EvenSum + iDigit;   // business Logic
        }
        else
        {
            OddSum = OddSum + iDigit;     // business Logic
        }
        iNo = iNo / 10;
    }

    return EvenSum - OddSum;

}

int main()
{
     int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference Between summation is : %d", iRet);

    return EXIT_SUCCESS;
}