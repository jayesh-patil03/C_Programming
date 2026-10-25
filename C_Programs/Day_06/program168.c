// accept Number from user and print Average
/*
    4231
    digitCount = 4
    digitSum = 1+3+2+4 = 10

    (digitSum / digitCount) = Average 
*/

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iSum = iSum + iDigit;

        iNo = iNo/10;
    }
    

    return iSum/iCount;  // without type casting --> Data Loss
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digit is : %f", fRet);

    return EXIT_SUCCESS;
}