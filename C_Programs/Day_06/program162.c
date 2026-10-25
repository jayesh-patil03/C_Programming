// Accept Number from user and print digits
// 6542  --> 2   4   5   6
#include<stdio.h>
#include<stdlib.h>

void displayDigits(int iNo)
{
    int iDigit = 0;

    // updater --> conver negative value to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);

        iNo = iNo / 10;

    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    displayDigits(iValue);

    return EXIT_SUCCESS;
}