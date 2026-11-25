// Calculate shopping Discount

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("Payable Amount = %f", fAmount);
    }
    else if(fAmount > 1000 && fAmount <= 5000)
    {
        fDiscount = (10.0f/100.0f)*fAmount;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount = %f", fFinalAmount);
    }
    else if(fAmount > 5000)
    {
        fDiscount = (20.0f/100.0f)*fAmount;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount = %f", fFinalAmount);
    }
    
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}