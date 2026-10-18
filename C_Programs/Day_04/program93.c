// Find Factorial

#include <stdio.h>
#include <stdlib.h>

long int Factorial(int iNo)
{
int iCnt = 0;
long int iFact = 0;  // update data type to store larger value

   for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)  // initialiazation of iCnt and iFact in For loop
    {
        iFact = iFact * iCnt;
    } 

    return iFact;
}

int main()
{

    int iValue = 0;
    long int iRet = 0; // update data type to store larger value
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %ld\n", iRet); // change format specifier

    return EXIT_SUCCESS;
}