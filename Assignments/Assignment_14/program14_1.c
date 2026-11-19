#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MultFact
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and return Multiplication of all factors of that number.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i <= (iNo/2) ; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}