#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*  ");
    }
}

int main()
{
    int iValue = 0;

    printf("How many star you want to print : ");
    scanf("%d", &iValue);

    Accept(iValue);
    
    return EXIT_SUCCESS;
}