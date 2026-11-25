// Check Divisibilty

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{

    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
       printf("Divisible by both");
    }
    else if(iNo % 3 == 0)
    {
        printf("Divisible by 3");
    }
    else if(iNo % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by both");
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