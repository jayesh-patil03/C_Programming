#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int Frequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d  ", iNo);
    }
}

int main()
{
   int iValue = 0, iCount = 0;
   
   printf("Enter Number : ");
   scanf("%d", &iValue);

   printf("Enter Frequency : \n");
   scanf("%d", &iCount);

   Display(iValue, iCount);

    return EXIT_SUCCESS;
}