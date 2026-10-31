// find Factorial
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iSum = 1;

    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;  // business Logic
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d", iRet);

    return EXIT_SUCCESS;
}