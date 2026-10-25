// accept Number from user and print sum of all digits
// 2365     --> 5+6+3+2 = 16

#include<stdio.h>
#include<stdlib.h>

int sumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        // Logic        
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = sumDigits(iValue);

    printf("Summation is : %d", iRet);

    return EXIT_SUCCESS;
}