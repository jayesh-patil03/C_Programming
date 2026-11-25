// Pattern Printing

#include<stdio.h>
#include<stdlib.h>

void PrintNumbers(int iNo)
{
    int icnt = 0;
    
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt =1; icnt <= iNo; icnt++)
    {
        printf("%d\t", icnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    PrintNumbers(iValue);


    return EXIT_SUCCESS;
}