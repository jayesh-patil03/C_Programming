#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FactRev
//  Input           : integer
//  Output          : void
//  Description     : WAP which accepts number from user and print all factors of that number in reverse order.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;

    for(i = (iNo/2); i >= 1 ; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d  ", i);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}