// Accept Number from user and return in Reverse order

#include<stdio.h>
#include<stdlib.h>

int reverse(int iNo)
{
    int iDigit = 0, iRev = 0;


    while(iNo != 0)
    {
        iDigit = iNo % 10;  // give last digit of Number

        iRev = (iRev * 10) + iDigit; // logic to reverse

        iNo = iNo / 10;  // Remove Last digit from number
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = reverse(iValue);

    printf("In Reverse order : %d", iRet);

    return EXIT_SUCCESS;
}