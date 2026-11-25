// Find Greater Number out of 2
#include<stdio.h>
#include<stdlib.h>

void CheckGreater(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("Both Numbers are equal");
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is Greater", iNo2);
    }
    else
    {
        printf("%d is Greater", iNo1);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter 2 Numbers : \n");
    scanf("%d  ", &iValue1);
    scanf("%d", &iValue2);

    CheckGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}