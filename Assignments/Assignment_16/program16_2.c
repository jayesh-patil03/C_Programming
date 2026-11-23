#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer, integer
//  Output          : void
//  Description     : WAP which accepts number of rows and number of cols and print the given pattern.
//  Date            : 23/11/2026
//  Author          : Jayesh Devidas Patil
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    pattern :
                A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
*/

void Pattern(int iRow, int iCols)
{
    int i = 0, j = 0;
    char CH = '\0', ch = '\0';

    for(i = 0; i < iRow; i++)
    { 
        CH = 'A';
        ch = 'a';
        for(j = 0; j < iCols; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t", CH);
                CH++;  
            }
            else
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of cols : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}