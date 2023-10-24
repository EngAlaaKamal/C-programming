#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Enter the first number!\n");
    scanf("%d",&x);
    printf("Enter the second number!\n");
    scanf("%d",&y);

    if(x==y){
        printf("the numbers are equal \n");
    }else if(x!=y && x>y){
        printf("the numbers are not equal and the first number %d is the largest\n",x);
    }else{
        printf("the numbers are not equal and the second number %d is the largest\n",y);
    }

    return 0;
}
