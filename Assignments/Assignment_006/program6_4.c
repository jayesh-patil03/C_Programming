// Calculate shopping Discount

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 + iSide2 > iSide3 && iSide2 + iSide3 > iSide1 && iSide3 + iSide1 > iSide2) && (iSide1 > 0 && iSide2 > 0 && iSide3 > 0))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triagle\n");
    }
}



int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}