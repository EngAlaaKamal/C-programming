#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    printf("Enter the Radius of a circle\n");
    scanf("%f",&r);

    printf("the area is %f \n", 3.14*r*r);
    printf("the circumference is %f \n", 2*3.14*r);

    return 0;
}
