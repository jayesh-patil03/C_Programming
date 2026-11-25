// Print Number Line

#include<stdio.h>
#include<stdlib.h>

void printNumberLine(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printNumberLine(iValue);

    return EXIT_SUCCESS;
}