#include <stdio.h>
#include <stdlib.h>

int main()
{
double no;
printf("Enter the number : \n");
scanf("%lf",&no);
 int count =0;
  while(no!=((int)no))
    {
         count++; no=no*10;
  }
  printf("%d",count);
    return 0;
}
