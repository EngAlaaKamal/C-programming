#include <stdio.h>
#include <stdlib.h>

int cube(int x);

int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("%d",cube(x));
    return 0;
}

int cube(int x) {
  return x*x*x;
}
