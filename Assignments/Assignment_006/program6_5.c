// Calculate shopping Discount

#include<stdio.h>
#include<stdlib.h>

void CalCulateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears < 0 || fSalary < 0)
    {
        printf("Invalid input");
    }
    else if(iYears > 10)
    {
        fBonus = (15.0f/100.0f) * fSalary;
        printf("Bonus = %f", fBonus);
    }
    else if(iYears >= 5 && iYears <= 10)
    {
        fBonus = (10.0f/100.0f) * fSalary;
        printf("Bonus = %f", fBonus);
    }
    else if(iYears < 5)
    {
        fBonus = (5.0f/100.0f) * fSalary;
        printf("Bonus = %f", fBonus);
    }
    
}



int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and Years : \n");
    scanf("%f %d", &fSalary, &iYears);

    CalCulateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}