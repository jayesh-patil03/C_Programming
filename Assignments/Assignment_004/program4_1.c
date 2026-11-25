// Check Whether Number is positive or negative
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue < 0)
    {
        printf("Given Number is Negative\n");
    }
    else
    {
        printf("GIven Number is positive\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}