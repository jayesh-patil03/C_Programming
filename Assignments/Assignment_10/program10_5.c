#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SquareMeter
//  Input           : float
//  Output          : double
//  Description     : Convert Area from Square Feet to Square Meter
//  Date            : 02/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

double SquareMeter(float fSquareF)
{
    double SquareM = 0.0;

    SquareM = 0.0929;

    SquareM = SquareM * fSquareF; 

    return SquareM;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : \n");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square Meter : %lf", dRet);

    return EXIT_SUCCESS;
}