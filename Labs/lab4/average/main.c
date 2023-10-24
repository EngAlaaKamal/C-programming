#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3





int main()
{

    int arr[ROW][COL]=
    {
        {3,4,5},
        {2,5,7},
        {8,9,5}
    };

    int sum=0;
    int average=0;

    for(int i=0; i<COL; i++)
    {
        sum=0;
        for(int j=0; j<ROW; j++)
        {
            sum +=arr[j][i];
        }

        average= sum/ROW;
        printf("column %d average = %d \n", i, average);
    }


    return 0;
}


