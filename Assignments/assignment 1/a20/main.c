#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,s,i,j;
  printf("Enter numbers of rows");
  scanf("%d",&n);
  for(i=1; i<=n; i++){

    //for loop for displaying space
    for(s=i; s<n; s++){
        printf(" ");
    }

    //for loop for displaying star
    for(j=1; j<=(2*i-1); j++){
        printf("*");
    }
    printf("\n");
  }
    return 0;
}
