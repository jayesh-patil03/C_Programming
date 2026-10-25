// Seperate all the Functions

#include<stdio.h>
#include<stdlib.h>

// countDigits
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

// sumDigits
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

// AverageDigits
float AverageDigits(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = sumDigits(iNo);
    iCount = countDigits(iNo);

    fAvg = (float)iSum/ (float)iCount;

    return fAvg;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digit is : %.2f", fRet);  // width specifier --> %.2f

    return EXIT_SUCCESS;
}