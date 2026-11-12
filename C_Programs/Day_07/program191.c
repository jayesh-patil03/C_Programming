// problems based on patterns
/*
    Input :     4
    Output :    -4   -3   -2   -1   0   1   2   3   4
    Time Complexity :- O(2N)
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++ )  // O(2N)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}