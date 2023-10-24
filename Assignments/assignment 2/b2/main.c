#include <stdio.h>
#include <stdlib.h>

 char alpha(char c);

int main()
{
     char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("%s",alpha(c));
    return 0;
}

char alpha(char c){
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an alphabet.", c);
   }
    else{
        printf("%c is not an alphabet.", c);
    }
}
