#include"SpiralOrderPrint.h"



void Test1()
{
	int rows = 3;
	int cols = 4;
	int** matrix = GetMatrix(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; ++j)
		{
			matrix[i][j] = i*cols + j;
		}
	}
	SpiralOrderPrint(matrix, rows, cols);
	
}

int main()
{
	Test1();
	system("pause");
	return 0;
}