#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x;
    printf("enter student grade percentage :\n");
    scanf("%d",&x);

    if( x<50){
        printf("fail");
      }else if(x>=50 && x<65){
        printf("pass");
    }else if(x>=65 && x<75){
        printf("good");
    }else if(x>=75 && x<85){
        printf("very good");
    }else if(x>=85 && x<=100){
        printf("excellent");
   } else{
        printf("enter the correct grade percentage");
   }
    return 0;
}
