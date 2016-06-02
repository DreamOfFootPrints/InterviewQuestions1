#include<iostream>
using namespace std;
#include<string>


int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
		matrix[i] = new int[cols]();
	return matrix;
}


int Min(int a, int b)
{
	return a < b ? a : b;
}

int MinCut(string str)
{
	if (str.c_str() == NULL)
		return 0;
	int len = str.size();
	int* dp = new int[len+1];
	int max = (int)0x7FFFFFFF;
	dp[len] = -1;	
	int** p = GetMatrix(len, len);
	for (int i = len - 1; i >= 0; i--)
	{
		dp[i] = max;
		for (int j = i; j < len; j++)
		{
			if (str[i] == str[j] && (j - i < 2 || p[i + 1][j - 1]==1))
			{
				p[i][j] = 1;
				dp[i] = Min(dp[i], dp[j + 1] + 1);
			}
		}
	}
	return dp[0];
}