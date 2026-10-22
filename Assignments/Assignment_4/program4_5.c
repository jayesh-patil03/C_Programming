// Check Divisibility by 5
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}