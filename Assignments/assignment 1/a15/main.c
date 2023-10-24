#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base;
    double exp;
    printf("Enter base number :\n");
    scanf("%lf",&base);
    printf("Enter exponent number :\n");
    scanf("%lf",&exp);

    double result= 1.0;
    while(exp!=0){
        result *=base;
        exp--;
    }
    printf("The result is : %lf \n",result);

    return 0;
}
