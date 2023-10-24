#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    char arr[SIZE]="alaa kamal";

    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        for(int j=1;j<arr[i]!='\0'; j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        printf("frequency of %c is %d \n",arr[i],count) ;

    }



    return 0;
}
