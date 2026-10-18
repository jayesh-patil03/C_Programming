/*
    step1 : understand the problem statement
    step2 : write the algorithm
    step3 : decide programming language
    step4 : write the program
    step5 : test the program
*/


//////////////////////////////////////////////////////
//
//  step1 : understand the problem statement
//           User is going toenter any 2 integer
//           and we have to perform additon
//
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//  step2 : write the algorithm
/*
        START
         Accept first number as No1
         Acccept second number as No2
         create a variable as ANS to store the result
         perform the addition and store into ans
         Display result from ANS
        STOP
*/           
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////
//
//  step3 : decide programming language
//          we select C programming
//
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//  step4 : Write the program
//
//////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;   // Bussiness logic

    return iAns;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2) ;  

    printf("Addition is : %d\n", iResult);
    
    return 0;
}