#include<iostream>
using namespace std;

//���һ����ά����
int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}



//���Ĵ���
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
		//��ӡ��
		for (int j = tC; j < dC; ++j)//ע��������<����,=
		{
			cout << matrix[tR][j] << ' ';
		}

		//��ӡ��
		for (int i = tR; i < dR; ++i)
		{
			cout << matrix[i][dC] << " ";
		}
		//��ӡ��
		for (int j = dC; j > tC; --j)
		{
			cout << matrix[dR][j] << " ";
		}
		//��ӡ��
		for (int i = dR; i > tR; --i)
		{
			cout << matrix[i][tC] << " ";
		}
	}
}



//������
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