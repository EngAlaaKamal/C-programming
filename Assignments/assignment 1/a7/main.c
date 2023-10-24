#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the second number\n");
    scanf("%d",&y);
    printf("Enter the third number\n");
    scanf("%d",&z);

    if(x>y&&x>z){
        printf("the largest is : %d \n",x);
    }else if(y>x&&y>z){
        printf("the largest is : %d \n",y);
    }else if(z>x&&z>y){
        printf("the largest is : %d \n",z);
    }else{
        printf("the three numbers are equal\n" );
    }
    return 0;
}
