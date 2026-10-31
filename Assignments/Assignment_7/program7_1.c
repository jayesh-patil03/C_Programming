// Pattern Printing

#include<stdio.h>
#include<stdlib.h>

// Helper function
void printPattern(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t");
        printf("*\t");  
    }
}

// Entry-Point function
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printPattern(iValue);

    return EXIT_SUCCESS;
}