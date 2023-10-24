#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter positive number :\n");
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Enter correct number : \n");
    }
    else
    {
        int i=2;
        int counter=0;
        while(i<x && x%i!=0)
        {
            counter++;
            i++;
        }
        if(counter==x-2)
        {
            printf("that number is prime \n");
        }
        else
        {
            printf("that number is not prime \n");
        }
    }
    return 0;
}
