#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);


    for(int i=0; i<=100; i++)
    {
        x += i;
    }
    printf("sum = %d \n",x);




    return 0;
}
