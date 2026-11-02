#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RectArea
//  Input           : float, float
//  Output          : double
//  Description     : Find Area of Rectangle
//  Date            : 02/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHight)
{
    double Area = 0.0;

    Area = fWidth * fHight;

    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f", &fValue1);

    printf("Enter height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf", dRet);

    return EXIT_SUCCESS;
}