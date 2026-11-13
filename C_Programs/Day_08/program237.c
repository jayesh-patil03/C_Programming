#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";

    char *ptr = NULL;

    ptr = &(Arr[0]);   // initialization

    while(*ptr != '\0')  // condition
    {
        printf("%c\n", *ptr);
        ptr++;               // displacement
    }


    return EXIT_SUCCESS;
}