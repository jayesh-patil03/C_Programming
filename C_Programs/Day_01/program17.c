#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    if((iValue % 2) == 0)
    {
        printf("Number is EVEN\n");
    }
    else
    {
        printf("Number id ODD\n");
    }

    return EXIT_SUCCESS;
}