#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Hello world!\n");
    scanf("%d",&x);

    if(x>0)
    {
        int fac =1;
                 for(int i=x; i>0; i--)
        {
            fac *= i;
        }
        printf("the factorial is : %d ",fac);
    }
    else
    {
        printf("Enter a positive number");
    }
    return 0;
}
