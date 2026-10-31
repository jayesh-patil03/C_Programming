#include<stdio.h>
#include<stdlib.h>

// Helper Function
void oddNumbers(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

// Main Function
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    oddNumbers(iValue);

    return EXIT_SUCCESS;
}