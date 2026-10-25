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
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    fAvg = iSum/iCount; // need of type casting

    return fAvg;
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