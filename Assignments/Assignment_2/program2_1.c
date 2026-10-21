// Accept one no. from user and print that number of * on screen
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
int iCnt = 0;

iCnt = 1;

while(iCnt <= iNo)
{
    printf("*  ");
    iNo--;
}
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}