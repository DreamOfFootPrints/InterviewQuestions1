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


void RotateEdge(int** matrix, int tR, int tC, int dR, int dC)
{
	int times = dR - tR;//仔细一点，不加1
	for (int i = 0; i < times; ++i)
	{
		int tmp = matrix[tR][tC + i];
		matrix[tR][tC + i] = matrix[dR - i][tC];
		matrix[dR - i][tC] = matrix[dR][dC - i];
		matrix[dR][dC - i] = matrix[tR + i][dC];
		matrix[tR + i][dC] = tmp;
	}
}




void Rotate(int**  matrix, int rows, int cols)
{
	if (matrix == NULL || rows <= 0 || cols <= 0||rows!=cols)
	{
		return;
	}
	int tR = 0;
	int tC = 0;
	int dR = rows-1;
	int dC = cols-1;
	while (tR <= dR)
	{
		RotateEdge(matrix, tR++, tC++, dR--, dC--);
	}

}