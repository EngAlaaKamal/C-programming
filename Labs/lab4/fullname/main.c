#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    int c[SIZE];
    int s[SIZE];
    printf("Enter your first name :\n");
    scanf("%s",c);
    printf("Enter your last name :\n");
    scanf("%s",s);

    printf("%s %s\n",c,s);
    return 0;
}
