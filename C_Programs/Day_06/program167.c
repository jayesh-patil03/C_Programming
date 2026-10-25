// accept Number from user and print count all digits
// 2534 --> count of digit in this number is : 4

#include<stdio.h>
#include<stdlib.h>

int countDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        // Logic        
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = countDigits(iValue);

    printf("count of digit is : %d", iRet);

    return EXIT_SUCCESS;
}