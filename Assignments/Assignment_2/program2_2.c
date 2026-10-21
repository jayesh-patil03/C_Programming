// Accept one no. from user and print that number of * on screen
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iNo > iCnt)
    {
        printf("*  ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}