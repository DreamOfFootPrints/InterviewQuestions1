#include<iostream>
using namespace std;
#include<string>



int Max(int a, int b)
{
	return a > b ? a : b;
}

int MaxLength(string str)
{
	if (str.c_str() == NULL)
		return 0;
	int prev = -1;
	int* dp = new int[str.size()]();//dp[i]表示以str[i]结尾的最长有效长度
	dp[0] = 0;
	int res = dp[0];
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ')')
		{
			prev = i - dp[i - 1] - 1;
			if (prev >= 0 && str[prev] == '(')
			{
				dp[i] = dp[i - 1] + 2 + (prev > 0 ? dp[prev-1] : 0);//运算符的优先性一定要注意，三目运算符一定要加括号
			}
		}
		res = Max(res, dp[i]);
	}
	return res;
}