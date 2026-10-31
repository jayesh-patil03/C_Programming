// Find odd Factorial Multiplication
#include<stdio.h>
#include<stdlib.h>

int oddFactorial(int iNo)
{
    int iCnt = 0, iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = oddFactorial(iValue);

    printf("odd Factorial of Number is %d\n", iRet);

    return EXIT_SUCCESS;
}