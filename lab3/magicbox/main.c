#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void gotoxy(int x, int y)
{

    COORD coord= {0,0};

    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main()
{
    int row,col,value;
    int size;

    printf("please enter odd size :  ");
     scanf("%d",&size);

  if(size%2!=0 && size>1)
     {


          row=1;
     col=(size+1)/2;
     value=1;

    do
    {
        gotoxy(col*5,row);
        printf("%5d", value);
        delay(2);
        if(value%size==0)
        {
            row++;
        }
        else
        {
            col--;
            row--;
        }
        if(0==row)
        {
            row=size;
        }
        if(0==col)
        {
            col=size;
        }

        value++;
    }
    while(value <= size*size);
     }else{
     printf("please enter correct number");
     }











    return 0;
}
