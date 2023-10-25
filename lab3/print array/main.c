#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
    int size;
    printf("enter size of an array\n");
    scanf("%d",&size);
    int arr[size];
    int i;
    for(i=0; i<size; i++)
    {
        printf("enter element of NO : %d \n",i);
        scanf("%d", &arr[i]);
    }
    //for print
    printf("elements of that array :: \n ");
    int j;
    for (j=0; j<size; j++)
    {
        printf("arr[%d] is :%d \n ",j, arr[j]);
    }
    return 0;
}
