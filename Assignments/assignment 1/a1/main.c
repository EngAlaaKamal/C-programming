#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Enter the first number ");
    scanf("%d",&x);
    printf("Enter the second number ");
    scanf("%d",&y);

    int result;
    result=((x+y)*3)+10;

    printf("%d",result);
    return 0;
}
