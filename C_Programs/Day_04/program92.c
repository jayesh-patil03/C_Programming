// Find Factorial

#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
int iCnt = 0, iFact = 0;

   for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)  // initialiazation of iCnt and iFact in For loop
    {
        iFact = iFact * iCnt;
    } 

    return iFact;
}

int main()
{

    int iValue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %d\n", iRet);

    return EXIT_SUCCESS;
}