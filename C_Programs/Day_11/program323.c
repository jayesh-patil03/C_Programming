#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter Number of elements you want \n");
    scanf("%d", &iSize);

    // Step 1 : allocate the memomry
    ptr = (int *)malloc(sizeof(int) * iSize);

    // Step 2 : use the memory

    // Step 3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}