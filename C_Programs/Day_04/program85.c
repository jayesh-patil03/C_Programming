/*
    --------------------------------------------
                 operation &&
    --------------------------------------------
       Result1      Result2       Final Result
    --------------------------------------------
        TRUE        TRUE            TRUE
        TRUE        FALSE           FALSE
        FALSE       TRUE            FALSE           ---> SHORT CIRCUIT EVALUATION (Dont check 2nd)
        FALSE       FALSE           FALSE           ---> SHORT CIRCUIT EVALUATION
    --------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{

    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
    {
        printf("Divisible by 5 and 3\n");
    }
    else
    {
        printf("Not divisible by both\n");
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