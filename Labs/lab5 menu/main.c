
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define  HOME 71
#define END 79
#define ENTER 13
#define SIZE 100
#define LEFT 75

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
//----------------------------
struct student
{
    char name[10];
    char gender;
    int age;
    int id;
};

void arrows(int real,int arrow);
int scan_struct_Students(struct student s[],int size,int count );
void print_struct_Students(struct student s[],int size,int count );
//---------------------------------------------

int main()
{

    struct student students[SIZE];
    int count=0;
    int position =1;
    int c = 0;
    int flag=1;
    int x;



    while(flag!=0)
    {

        system("cls");
        arrows(3,position);
        printf(" \n\n\n      New \n\n");
        arrows(2,position);
        printf("      Display \n\n");
        arrows(1,position);
        printf("      End");


        switch ((c = _getch()))
        {
        case KEY_UP:
            if(position!=3)
            {
                position++;
            }
            else
            {
                position=1;
            }

            break;
        case KEY_DOWN:
            if(position !=1)
            {
                position--;
            }
            else
            {
                position=3;
            }
            break;
        case ENTER:
            system("cls");
            SetColor(15);
            if(position==3)
            {

                count=scan_struct_Students(  students,SIZE,count );

            }
            else if(position==2)
            {

                print_struct_Students(students,SIZE,count );
                flag=0;

            }
            else
            {

                printf(" are you want to exit \n");
                scanf("%c \n",x);
            }

            break;
        case END:
            flag=0;
        default :
            position=position;
            break;
        }

    }

    if(_getch()==13 && position==2)
    {
        print_struct_Students(students,SIZE,count );

    }
    else if(_getch()==13 && position==1)
    {

        system("cls");
    }




    return 0;
}
//------------------------------------





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

int scan_struct_Students(struct student s[],int size,int count)
{

    for(int i=0; i<size; i++)
    {

        printf("Enter name [%d]",i+1);
        scanf("%[^\n]s",s[i].name);

        printf("Enter age [%d]",i+1);
        scanf("%d",&s[i].age);

        printf("Enter ID [%d]",i+1);
        scanf("%d",&s[i].id);

        printf("Enter Gender [%d]",i+1);
        scanf(" %c",&s[i].gender);

        count++;
        if(_getch()!=13)
        {
            return count;
        }
    }


}



void print_struct_Students(struct student s[],int size,int count )
{
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<count; i++)
    {
        printf("name[%d] =%s \n",i+1,s[i].name);
        printf("gender[%d] = %c \n",i+1,s[i].gender);
        printf("age [%d]=  %d \n",i+1,s[i].age);
        printf("id [%d] =  %d \n",i+1,s[i].id);
    }
}
