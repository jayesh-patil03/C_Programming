// Accept onr number from user and print that number of even no. on screen.
#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid Number\n");
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d  ", iCnt*2);
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}