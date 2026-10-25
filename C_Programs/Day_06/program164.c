// accept Number from user and print ODD digits from this no
/*
   6532     --> 3   5
   2546     --> 5
   793      --> 3   9   7
   2468     --> No odd digits
*/

#include<stdio.h>
#include<stdlib.h>

void displayOddDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        // Logic        
         if(iDigit % 2 != 0)
        {
            printf("%d\n", iDigit);
        }

        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    displayOddDigits(iValue);

    return EXIT_SUCCESS;
}