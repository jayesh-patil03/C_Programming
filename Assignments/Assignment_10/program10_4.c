#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FhtoCs
//  Input           : float
//  Output          : double
//  Description     : Convert temprature from fahernheit to celsius
//  Date            : 02/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double Celsius = 0.0;

    Celsius = (fTemp - 32) * (5.0/9.0);


    return Celsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temp in fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("temp in celsius : %lf", dRet);

    return EXIT_SUCCESS;
}