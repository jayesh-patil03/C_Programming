// accept Number from user and print EVEN digits from this number
/*
   6532     --> 2   6
   2546     --> 6   4   2
   793      --> No Even digit
*/

#include<stdio.h>
#include<stdlib.h>

void displayEvenDigits(int iNo)
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
         if(iDigit % 2 == 0)
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

    displayEvenDigits(iValue);

    return EXIT_SUCCESS;
}