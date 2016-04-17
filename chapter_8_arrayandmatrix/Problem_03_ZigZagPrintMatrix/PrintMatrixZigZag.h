#include<iostream>
using namespace std;


 
int** GetMatic(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}


void PrintLevel(int **matrix, int tR, int  tC, int dR, int  dC, bool fromUp)
{
	if (fromUp)
	{
		for (int i = tR; i <= dR; ++i)
		{
			printf("%d ", matrix[i][tC--]);
		}
	}
	else
	{
		for (int i = dR; i >= tR; --i)
		{
			printf("%d ", matrix[i][dC++]);
		}
	}
}

void PrintMatrixZigZag(int ** matrix, int rows, int columns)
{
	if (matrix == NULL)
	{
		return;
	}
	int tR = 0;
	int tC = 0;
	int dR = 0;
	int dC = 0;
	int endR = rows - 1;
	int endC = columns - 1;
	bool fromUp = false;
	while (tR <= endR)
	{
		PrintLevel(matrix, tR, tC, dR, dC, fromUp);
		tR = tC == endC ? tR + 1 : tR;//ÊÇ+1£¬²»ÊÇ++
		tC = tC == endC ? tC : tC + 1;
		dC = dR == endR ? dC + 1 : dC;
		dR = dR == endR ? dR : dR + 1;
		fromUp = !fromUp;
	}
}

