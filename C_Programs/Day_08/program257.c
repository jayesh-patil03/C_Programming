#include<stdio.h>
#include<stdlib.h>

int countSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a'  && *str <= 'z')
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

    iRet = countSmall(Arr);   

    printf("Frequency of a to z : %d", iRet);

    return EXIT_SUCCESS;
}