/*
    --------------------------------------------
                 operation ||
    --------------------------------------------
       Result1      Result2       Final Result
    --------------------------------------------
        TRUE        TRUE            TRUE          ---> SHORT CIRCUIT EVALUATION
        TRUE        FALSE           TRUE          ---> SHORT CIRCUIT EVALUATION
        FALSE       TRUE            TRUE
        FALSE       FALSE           FALSE
    --------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{

    if(((iNo % 5) == 0) || ((iNo % 3) == 0))
    {
        printf("Divisible\n");
    }
    else
    {
        printf("Not divisible\n");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);


    return EXIT_SUCCESS;
}