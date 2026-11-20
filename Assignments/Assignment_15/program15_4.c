#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Multiply
//  Input           : integer, Integer, Integer
//  Output          : Integer
//  Description     : WAP which accepts 3 numbers from user and Return its multiplication.
//  Date            : 20/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int total = 1;

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        total = total * iNo1;
    }
    if(iNo2 != 0)
    {
        total = total * iNo2;
    }
    if(iNo3 != 0)
    {
        total = total * iNo3;
    }

    return total;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please Enter Numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("multiplication of all numbers : %d", iRet);

    return EXIT_SUCCESS;
}