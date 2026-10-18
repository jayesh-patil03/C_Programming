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

int main()
{

    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult = iValue1 + iValue2;  // Bussiness logic

    printf("%d\n", iResult);
    
    return 0;
}