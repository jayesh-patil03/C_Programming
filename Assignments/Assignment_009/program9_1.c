#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : oddFactorial
//  Input           : Integer
//  Output          : Void
//  Description     : Display Pattern
//  Date            : 31/10/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
        
    }

    // we can aslo write two separate loop
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}