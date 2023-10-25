#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <dir.h>
#define ENTER 13
#define RIGHT 77
#define LEFT 75
#define SIZE 20



void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void display_menu(int position);

int main()
{
    int i=0;
    char  arr[SIZE]= {0};


    while(i <=SIZE)
    {

        int  c = getch();// read next char

        if(c==LEFT&&i>0)
        {
            i--;
            gotoxy(i,0);
        }
        else if(c==RIGHT&&i<SIZE)
        {
            i++;
            gotoxy(i,0);
        }else if(c>=32&&c<=126&&i<SIZE)
        {
            arr[i]=c;
            printf("%c",arr[i]);

            i++;
        }else if(c==ENTER){
        printf("\n%s\n",arr);
        return;
        }

    }
    return 0;
}


