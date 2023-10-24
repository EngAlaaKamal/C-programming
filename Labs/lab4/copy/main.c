#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


int main()
{
    char str[SIZE],copy_str[SIZE];
    int i;

    scanf("%[^\n]sh",str);


    for(i = 0; str[i] != '\0'; i++){
          copy_str[i] = str[i];
    }



    printf("Copied string = %s",copy_str);

    return 0;
}
