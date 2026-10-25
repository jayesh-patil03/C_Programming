// Pattern Printing
// $    $    $     $
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Frequency of $ : \n");
    scanf("%d", &iValue);
    
    pattern(iValue);

    return EXIT_SUCCESS;
}