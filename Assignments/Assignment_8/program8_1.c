#include<stdio.h>
#include<stdlib.h>

void Numbers(int iNo)
{
    if(iNo <= 50)
    {
        printf("small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("Greater");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Numbers(iValue);

    return EXIT_SUCCESS;
}