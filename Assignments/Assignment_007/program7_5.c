#include<stdio.h>
#include<stdlib.h>

void showMultiple(int iNo)
{
    int iCnt = 0;
    int Multiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        Multiple = iNo * iCnt;
        
        printf("%d\t", Multiple);
    }
}

int main()
{
    int iValue = 0;

    printf("ENter Number : ");
    scanf("%d", &iValue);

    showMultiple(iValue);

    return EXIT_SUCCESS;
}
