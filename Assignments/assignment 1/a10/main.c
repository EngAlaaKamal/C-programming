#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char z;

    printf("enter + or - or * or/ ");
    scanf("%c",&z);
    printf("enter first number");
    scanf("%d",&x);
    printf("enter second number");
    scanf("%d",&y);

    switch(z)
    {

    case '+':

        printf("%d + %d =%d",x,y,x+y);
        break;
    case '-':

        printf("%d - %d =%d",x,y,x-y);
        break;
    case '*':

        printf("%d * %d =%d",x,y,x*y);
        break;
    case '/':
        if(y ==0)
        {
            printf("error");
        }
        printf("%d / %d =%d",x,y,x/y);
        break;

    default:
        printf("incorrect mathematical operation");
        break;

    }
    return 0;
}
