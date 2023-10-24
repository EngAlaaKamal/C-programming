
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define  HOME 36
#define END 35
#define ENTER 13

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void arrows(int real,int arrow);



int main()
{


    int position =1;
    int c = 0;
    while(c !=HOME)
    {
       system("cls");

        arrows(1,position);
        printf("Home :\n\n\n");
        arrows(2,position);
        printf("      New \n\n");
        arrows(3,position);
        printf("      Display \n\n");
        arrows(4,position);
        printf("      End");
        _getch();
        switch ((c = _getch()))
        {
        case KEY_UP:
            if(position !=1){
                position--;
                }
            break;
        case KEY_DOWN:
            if(position ==4){
                position=1;
            }
                position++;
            break;
        case HOME:
            position=1;
            break;
        case ENTER:
             position=1;
            break;
        default :
            position=position;
            break;
        }
    }
    return 0;
}


void arrows(int real,int arrow)
{
    if(real==arrow)
    {
        SetColor(4);
    }
    else
    {
        SetColor(15);
    }
}
