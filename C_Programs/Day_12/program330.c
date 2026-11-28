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

float Average(int Arr[], int iLength)
{
    int iCnt = 0, isum = 0;

    printf("Elements of the array are : \n");   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        isum = isum + Arr[iCnt];
    }

    return ((float)isum / (float)iLength);  // type casting
}



int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    float fRet = 0.0f;

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
    printf("Summation is : %d\n", iRet);

    fRet = Average(ptr, iSize);
    printf("Avgerage of all values is : %f\n", fRet);

    // Step 3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}