// Print table of number given by user
#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0, iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iCnt * iNo;

        printf("%d\t", iTable);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}