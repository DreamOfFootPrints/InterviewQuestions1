#include<iostream>
using namespace std;


int** GetMatirx(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}


int Max(int a, int b)
{
	return a > b ? a : b;
}


bool g_InvalidInput = false;
int MaxSum(int ** matrirx, int rows, int cols)
{
	g_InvalidInput = false;
	if (matrirx == NULL || rows < 0 || cols < 0)
	{
		g_InvalidInput = true;
		return -1;
	}
	int GreatMax = (int)0x80000000;
	for (int i = 0; i < rows; ++i)
	{
		int* newArry = new int[cols]();
		for (int k = i; k < rows; ++k)
		{
			int curSum = 0;
			for (int j = 0; j < cols; ++j)
			{
				newArry[j] += matrirx[k][j];
				curSum += newArry[j];
				GreatMax = Max(GreatMax, curSum);
				curSum = curSum < 0 ? 0 : curSum;
			}
		}
	}
	return GreatMax;
}