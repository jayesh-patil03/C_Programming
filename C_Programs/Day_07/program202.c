// problems based on patterns
/*
    Input :     4
    Output :    A   B   C   D
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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