#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);       // special %s for string with space - %[^'\n']s

    printf("Entered String is : %s", Arr);

    return EXIT_SUCCESS;
}