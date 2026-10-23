// Check number is prime or not (Best way)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;    

    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)  // update
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;    
            break;         // update
        }
    }

    return bFlag;

}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)   
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("It is Not Prime Number\n");
    }

    return EXIT_SUCCESS;
}