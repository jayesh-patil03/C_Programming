#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnit)
{
    float fBill = 0.0f;

    if(iUnit < 0)
    {
        printf("Invalid Unit");
    }
    else if(iUnit > 0 && iUnit <= 100)
    {
        fBill = iUnit * 5;
        printf("%f rs", fBill);
    }
    else if( iUnit > 100 && iUnit <=200)
    {
        fBill = 500 + ((iUnit -100) * 7);
        printf("%f rs", fBill);
    }
    else 
    {
        fBill = 1200 + ((iUnit - 200) * 10);
        printf("%f rs", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed unit : \n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}