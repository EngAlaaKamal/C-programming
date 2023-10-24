#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    char arr[SIZE];
    printf("Enter Your String \n");
    scanf("%[^\n]s",arr);
    printf("%s",arr);


    return 0;
}
