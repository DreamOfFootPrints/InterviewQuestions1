#include"Rotate.h"



void Test1()
{
	int rows = 3;
	int cols = 3;
	int** matrix = GetMatrix(rows, cols);
	for (int i = 0; i < rows; ++i)
	{
		for (int j=0; j<cols; ++j)
		{
			matrix[i][j] = i*cols + j;
		}
	}
	Rotate(matrix, rows, cols);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j<cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
	}
}

int main()
{
	Test1();
	system("pause");
	return 0;
}