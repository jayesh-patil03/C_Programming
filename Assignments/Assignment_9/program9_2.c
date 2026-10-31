// convert currency --> usd to inr
#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
    int iValue = 0;

    iValue = iNo * 70;

    return iValue;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}