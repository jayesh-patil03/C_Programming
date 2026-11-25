// Check Voating Eligibility
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not eligible for voating");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter Age : \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}