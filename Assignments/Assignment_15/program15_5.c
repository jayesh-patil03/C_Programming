#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Percentage
//  Input           : integer, integer
//  Output          : Float
//  Description     : WAP which accepts total and obtained marks from user and Return its percentage.
//  Date            : 19/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float percent = 0.0f;

    if(iNo1 == 0 )
    {
        return 0.0f;
    }

    percent = (((float)iNo2/iNo1) * 100);

    return percent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f%%\n", fRet);

    return EXIT_SUCCESS;
}