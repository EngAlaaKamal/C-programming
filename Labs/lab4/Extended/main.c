#include <stdio.h>
#include <stdlib.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
int main()
{

int c = 0;
_getch();
switch ((c = _getch())) {
case KEY_UP:
    printf(" Extended Up\n");
    break;
case KEY_DOWN:
    printf("Extended Down\n");
    break;
case KEY_LEFT:
    printf("Extended Left\n");
    break;
case KEY_RIGHT:
    printf("Extended Right\n");
    break;
default:
    printf(" normal key Null\n");
    break;
}
    return 0;
}
