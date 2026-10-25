// Accept Number from user and check is it palindrom or not
/*
    palindrome - same reading from forward and backward
    3432 -> not palindrome
    7887 -> palindrome
    123321 -> palindrome

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;


    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = (iRev * 10) + iDigit; // logic to reverse

        iNo = iNo / 10;
    }

    if(iRev == iNo)     // ISSUE (iNo becomes 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is Palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }

    return EXIT_SUCCESS;
}