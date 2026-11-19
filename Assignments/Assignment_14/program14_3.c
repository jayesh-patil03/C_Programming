#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : NonFact
//  Input           : integer
//  Output          : void
//  Description     : WAP which accepts number from user and Display all non factors of that number.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo ; i++)
    {
        if(iNo % i != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}