// Check even or odd
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Given Number is EVEN\n");
    }
    else
    {
        printf("GIven Number is ODD\n");
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