// Find Factorial

#include <stdio.h>
#include <stdlib.h>

unsigned long Factorial(int iNo)
{
int iCnt = 0;
unsigned long long iFact = 0;  // update data type to store larger value

   for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)  // initialiazation of iCnt and iFact in For loop
    {
        iFact = iFact * iCnt;
    } 

    return iFact;
}

int main()
{

    int iValue = 0;
    unsigned long long iRet = 0; // update data type to store larger value
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %lld\n", iRet); // change format specifier

    return EXIT_SUCCESS;
}