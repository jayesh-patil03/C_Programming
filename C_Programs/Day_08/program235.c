#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    // scanf("%[^'\n']s", Arr);  
    
    fgets(Arr, sizeof(Arr), stdin);  // special function for string with spaces- fgets

    printf("Entered String is : %s", Arr);

    return EXIT_SUCCESS;
}