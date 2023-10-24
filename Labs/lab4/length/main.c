#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
     int arr[SIZE]={1,4,8,-1};
     int i=0,count=0;
     while(-1 != arr[i]){
        count++;
        i++;
     }
     printf("length = %d",count);
    return 0;
}
