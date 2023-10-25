
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    int size;
    printf("enter size of an array\n");
    scanf("%d",&size);
    int arr[size], min, max;
    int i;
    for(i=0; i<size; i++)
    {
        printf("enter element of NO : %d \n",i);
        scanf("%d", &arr[i]);

    }
     //min-max
     min=max=arr[0] ;
    for(int j=1; j<size; j++){
        if(arr[j]>max){
            max=arr[j];
        }else if(arr[j]<min){

            min=arr[j];
        }

        }
        printf("maximum element : %d \n",max);
         printf("minimum element : %d \n",min);






    return 0;
}
