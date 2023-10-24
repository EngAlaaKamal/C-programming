#include <stdio.h>
#include <stdlib.h>



void check(double num);


int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    check(num);

    return 0;
}

  void check(double num){
      if (num <= 0.0) {
        if (num == 0.0){
            printf("You entered 0.");
       } else{
            printf("You entered a negative number.");
       }
    }
    else{
        printf("You entered a positive number.");
    }
    }
