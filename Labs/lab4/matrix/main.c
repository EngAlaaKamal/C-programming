#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3


int main ()
{
  int mat1[ROW][COL] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
  int mat2[ROW][COL] = { {9, 10, 11}, {12, 13, 14}, {15, 16, 17} };
  int sum[ROW][COL], i, j;

  printf ("matrix 1 is :\n");
  for (i = 0; i < ROW; i++)
    {
      for (j = 0; j < ROW; j++)
	{
	  printf ("%d   ", mat1[i][j]);
	  if (j == ROW - 1)
	    {
	      printf ("\n\n");
	    }
	}
    }

  printf ("matrix 2 is :\n");
  for (i = 0; i < ROW; i++)
    {
      for (j = 0; j < ROW; j++)
	{
	  printf ("%d   ", mat2[i][j]);
	  if (j == ROW - 1)
	    {
	      printf ("\n\n");
	    }
	}
    }
  // adding two matrices
  for (i = 0; i < ROW; i++)
    for (j = 0; j < ROW; j++)
      {
	sum[i][j] = mat1[i][j] + mat2[i][j];
      }

  // printing the sum 0f two matrices
  printf ("\nSum of two matrices: \n");
  for (i = 0; i < ROW; i++)
    {
      for (j = 0; j < ROW; j++)
	{
	  printf ("%d   ", sum[i][j]);
	  if (j == ROW - 1)
	    {
	      printf ("\n\n");
	    }
	}
    }

  return 0;
}


