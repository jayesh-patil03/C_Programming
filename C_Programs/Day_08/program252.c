#include<stdio.h>
#include<stdlib.h>

int count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'b') || (*str == 'c') || (*str == 'd'))
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

    iRet = count(Arr);   

    printf("Frequency of a b c d : %d", iRet);

    return EXIT_SUCCESS;
}