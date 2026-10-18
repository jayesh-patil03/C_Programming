#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is EVEN\n");
    }
    else
    {
        printf("Number id ODD\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}