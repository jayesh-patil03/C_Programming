#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkGreater
//  Input           : integer
//  Output          : Boolean
//  Description     : WAP which accepts number from user and Returns it greater than 100 or not.
//  Date            : 20/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}