#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{

    if((iNo % 3) == 0)
    {
        printf("Divisible by 3\n");
    }
    else
    {
        printf("Not divisible by 3\n");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);


    return EXIT_SUCCESS;
}