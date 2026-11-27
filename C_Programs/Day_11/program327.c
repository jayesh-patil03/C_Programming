#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iLength)
{
    int iCnt = 0, isum = 0;

    printf("Elements of the array are : \n");   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        isum = isum + Arr[iCnt];
    }

    return isum;
   
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter Number of elements you want \n");
    scanf("%d", &iSize);

    // Step 1 : allocate the memomry
    ptr = (int *)malloc(sizeof(int) * iSize);

    // Step 2 : use the memory
    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Summation(ptr ,iSize);  // function call

    printf("Summation is : %d", iRet);

    // Step 3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}