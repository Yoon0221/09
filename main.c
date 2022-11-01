#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
	int i;
	int k;
	
	for (i = 0; i < ROWS; i++)
	{
		for (k = 0; k < COLS; k++)
		{
			C[i][k] = A[i][k] + B[i][k];
		}
	}
}


void printMatrix(int A[][COLS])
{
	int i;
	int k;
	
	for (i = 0; i < ROWS; i++)
	{
		for (k = 0; k < COLS; k++)
		{
			printf("%d ", A[i][k]);
		}
		printf("\n");
	}	 
}


int main(int argc, char *argv[]) 
{
	int A[ROWS][COLS] = 
	{
		{2,3,0},
		{8,9,1},
		{7,0,5}			
	};
	
	int B[ROWS][COLS] = 
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}			
	};
	
	int C[ROWS][COLS];
	
	
	addMatrix(A, B, C);
	printMatrix(C);
		
	return 0;
}


