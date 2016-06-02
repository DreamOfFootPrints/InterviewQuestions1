#include<iostream>
using namespace std;


int Max(int a, int b)
{
	return a > b ? a : b;
}


int Min(int a, int b)
{
	return a < b ? a : b;
}


int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}


int Win2(int arr[], int len)
{
	if (arr == NULL || len <= 0)
	{
		return 0;
	}

	int** dpFirst = GetMatrix(len, len);
	int** dpSecond = GetMatrix(len, len);
	for (int i = 0; i < len; i++)
	{
		dpFirst[i][i] = arr[i];
	}
	for (int j = 0; j < len; j++)
	{
		for (int i = j-1; i >= 0; i--)
		{
			dpFirst[i][j] = Max(arr[i] + dpSecond[i + 1][j], arr[j] + dpSecond[i][j - 1]);
			dpSecond[i][j] = Min(dpFirst[i + 1][j], dpFirst[i][j - 1]);
		}
	}
	return Max(dpFirst[0][len - 1], dpSecond[0][len - 1]);
}