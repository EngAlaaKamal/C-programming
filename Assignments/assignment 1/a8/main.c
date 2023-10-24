#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f",&x);
    float s=sqrt(x);

    if(x<=0 || s>(int)s ){
        printf("this number not perfect square \n");
    } else {
       printf("this number perfect square \n");
    }



    return 0;
}
