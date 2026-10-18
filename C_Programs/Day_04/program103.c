// Sum of Factors

#include <stdio.h>
#include <stdlib.h>

int SumFactor(int iNo)
{
int iCnt = 0, iSum = 0;


   for(iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    } 
    return iSum;
}

int main()
{

    int iValue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumFactor(iValue);
    
    printf("Sum of all factors is %d ", iRet);

    return EXIT_SUCCESS;
}


// Time Complexity : O(N/2)
