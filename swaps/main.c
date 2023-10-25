#include <stdio.h>
#include <stdlib.h>

void swap1(int* a,int* b);
void swap2(int* x,int* y);
void swap3(int* x,int* y);

int main()
{
    int x=4;
    int y=7;
    printf(" before swapping : x = %d \n y = %d \n\n\n",x,y);
    //swap1(&x,&y);
    //swap2(&x,&y);
     swap3(&x,&y);


    printf(" after swapping :x = %d \n y = %d \n",x,y);
    return 0;
}
void swap1 (int* x,int* y)
{
    int temp= *x;
    *x=*y;
    *y=temp;
}

void swap2 (int* x,int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void swap3 (int* x,int* y)
{
    if(0==*x){
        *x=*y;
        *y=0;
    }else if(0==*y){
        *y=*x;
        *x=0;
    }else{
    *x=*x * *y;
    *y=*x/ *y;
    *x=*x/ *y;
    }
}
