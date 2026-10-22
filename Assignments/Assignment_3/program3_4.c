// Accept one character from user and convert case of that character

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>   // Required for islower, toupper, isupper, tolower

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("%c", toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("%c", tolower(cValue));
    }
}

int main()
{

    char cValue = '\0';    

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}