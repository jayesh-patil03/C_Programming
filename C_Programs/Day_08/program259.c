#include<stdio.h>
#include<stdlib.h>

int countDigits(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0'  && *str <= '9')
        {
            iCount++;
        }
        
        str++;
    }

    return iCount;
}


int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    iRet = countDigits(Arr);   

    printf("Frequency of digit from string : %d", iRet);

    return EXIT_SUCCESS;
}