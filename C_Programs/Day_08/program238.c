#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";

    char *ptr = NULL;

    ptr = &(Arr[0]);   

    int iCount = 0;

    while(*ptr != '\0')  
    {
        ptr++;
        iCount++;
    }

    printf("Count of Letters is : %d", iCount);


    return EXIT_SUCCESS;
}