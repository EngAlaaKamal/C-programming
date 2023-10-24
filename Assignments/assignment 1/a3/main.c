#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    printf("Enter the tempreture degree\n");
    scanf("%lf",&d);

    d =(d *9/5) +32;
    printf("the tempreture to fahrenheit is : %lf \n" ,d );
    return 0;
}
