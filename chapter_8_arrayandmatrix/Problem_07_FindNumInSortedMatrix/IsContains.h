#include<iostream>
using namespace std;


int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}

bool g_InvalidInput = false;
bool IsContains(int** arr, int rows, int columns, int key)
{
	if (arr == NULL || rows < 0 || columns < 0)
	{
		return false;
	}
	int row = 0;
	int col = columns - 1;
	while (row < rows&&col >= 0)
	{
		if (arr[row][col] < key)
		{
			row++;
		}
		else if (arr[row][col] == key)
		{
			return true;
		}
		else
		{
			col--;
		}
	}
	return false;
}