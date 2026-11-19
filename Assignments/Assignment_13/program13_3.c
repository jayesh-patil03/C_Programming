#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountEven
//  Input           : integer
//  Output          : integer
//  Description     : WAP which accepts number from user and count frequency of Even digits.
//  Date            : 18/11/2026
//  Author          : Jayesh Devidas Patil
//
/////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit<=3 || iDigit>=7)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
     int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("Count of Rane is : %d", iRet);

    return EXIT_SUCCESS;
}