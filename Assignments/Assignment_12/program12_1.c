#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Input           : integer
//  Output          : void
//  Description     : WAP which accepts number from user and print it in reverse order.
//  Date            : 04/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}


