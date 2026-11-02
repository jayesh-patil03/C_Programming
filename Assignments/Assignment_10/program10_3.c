#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : KMtoMeter
//  Input           : integer
//  Output          : integer
//  Description     : Convert distance from KM to Meter 
//  Date            : 02/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int Meter = 0;

    Meter = 1000; // 1KM = 1000 meter

    Meter = Meter * iNo;

    return Meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in KM : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distane in Meter : %d", iRet);

    return EXIT_SUCCESS;
}