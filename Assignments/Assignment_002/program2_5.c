#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("Numer is EVEN");
    }
    else
    {
        printf("Number is ODD");
    }

    return EXIT_SUCCESS;
}