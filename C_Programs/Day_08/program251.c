#include<stdio.h>
#include<stdlib.h>

int countSpaceX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' ') )
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

    iRet = countSpaceX(Arr);   

    printf("Frequency of spaces : %d", iRet);

    return EXIT_SUCCESS;
}