#include<iostream>
using namespace std;

//获得一个二维数组
int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}



//核心代码
void Process(int** matrix, int tR, int tC, int dR, int dC)
{
	if (tR == dR)
	{
		for (int i = tC; i <= dC; ++i)
		{
			cout << matrix[tR][i] << " ";
		}
	}
	else if (tC == dC)
	{
		for (int i = tR; i <= dR; ++i)
		{
			cout << matrix[i][dR] << " ";
		}
	}
	else
	{
		//打印行
		for (int j = tC; j < dC; ++j)//注意这里是<不是,=
		{
			cout << matrix[tR][j] << ' ';
		}

		//打印列
		for (int i = tR; i < dR; ++i)
		{
			cout << matrix[i][dC] << " ";
		}
		//打印行
		for (int j = dC; j > tC; --j)
		{
			cout << matrix[dR][j] << " ";
		}
		//打印列
		for (int i = dR; i > tR; --i)
		{
			cout << matrix[i][tC] << " ";
		}
	}
}



//主程序
void SpiralOrderPrint(int** matrix,int rows,int cols)
{
	if (matrix == NULL || rows < 0 || cols < 0)
	{
		return;
	}
	int tR = 0;
	int tC = 0;
	int dR = rows-1;
	int dC = cols-1;
	while (tR <= dR && tC <= dC)
	{
		Process(matrix, tR++, tC++, dR--, dC--);
	}

}