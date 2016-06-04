#include<iostream>
using namespace std;
#include<string>


int** GetMatrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols]();
	}
	return matrix;
}


int Min(int a, int b)
{
	return a < b ? a : b;
}



int** GetDp(const char chs[])
{
	if (chs == NULL || strlen(chs) == 0)
	{
		return false;
	}
	int len = strlen(chs);
	int** dp = GetMatrix(len, len);
	dp[0][0] = 0;
	for (int j = 1; j < len; j++)//dp的值依赖与前一列和下一行，所以遍历的顺序要注意
	{							//而且这个动态规划表，只是使用了三三角的部分
		dp[j - 1][j] = chs[j - 1] == chs[j] ? 0 : 1;
		for (int i = j - 2; i >= 0; i--)
		{
			if (chs[i] == chs[j])
			{
				dp[i][j] = dp[i + 1][j - 1];
			}
			else
			{
				dp[i][j] = Min(dp[i + 1][j], dp[i][j - 1]) + 1;
			}
		}
	}
	return dp;
}



string GetPalindRome(string str)
{
	if (str.c_str() == NULL || str.size() < 2)
	{
		return str;
	}

	int len = str.size();
	int** dp = GetDp(str.c_str());
	string res;
	res.resize(strlen(str.c_str()) + dp[0][len-1]);
	int left = 0;
	int right = len - 1;
	int resLeft = 0;
	int resRight = res.size() - 1;
	while (left <= right)
	{
		if (str[left] == str[right])
		{
			res[resLeft++] = str[left++];
			res[resRight--] = str[right--];
		}
		else if (dp[left][right-1]<dp[left+1][right])
		{
			res[resLeft++] = str[right];
			res[resRight--] = str[right--];
		}
		else
		{
			res[resLeft++] = str[left];
			res[resRight--] = str[left++];
		}
	}
	return res;

}
