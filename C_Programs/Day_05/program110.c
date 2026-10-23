// Check number is prime or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == 0)
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

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet)   // update 
    {
        printf("It is Prime Number");
    }
    else
    {
        printf("It is Not Prime Number");
    }

    return EXIT_SUCCESS;
}