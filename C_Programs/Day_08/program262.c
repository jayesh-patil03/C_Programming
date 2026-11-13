#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;
        }

        str++;
    }

    
        
        printf("count of capital letters : %d\n", iCountCapital);
        printf("count of small letters : %d\n", iCountSmall);
        printf("count of digits : %d\n", iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};
    

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    countFrequencyX(Arr);   

    

    return EXIT_SUCCESS;
}