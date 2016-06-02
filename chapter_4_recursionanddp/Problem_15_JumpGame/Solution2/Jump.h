#include<iostream>
using namespace std;


int Min(int a, int b)
{
	return a < b ? a : b;
}

bool g_InvalidInput = false;
int Jump(int arr[], int len)
{
	if (arr == NULL || len <= 0)
	{
		g_InvalidInput = true;
		return 0;
	}
	int max = (int)0x7FFFFFFF;
	int* dp = new int[len]();
	dp[0] = 0;
	for (int i = 1; i < len; ++i)
	{
		dp[i] = max;
		for (int j = 0; j <= i; j++)
		{
			if (arr[j] + j >= i)
			{
				dp[i] = Min(dp[j]+1, dp[i]);

			}
		}
	}
	return dp[len - 1];
}