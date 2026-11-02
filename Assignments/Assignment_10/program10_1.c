#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CircleArea
//  Input           : float
//  Output          : double
//  Description     : Find Area of Circle
//  Date            : 02/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double Area = 0.0;
    float PI = 0.0f;

    PI = 3.14f;

    Area = PI * fRadius * fRadius;  // business Logic

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf", dRet);

    return EXIT_SUCCESS;
}