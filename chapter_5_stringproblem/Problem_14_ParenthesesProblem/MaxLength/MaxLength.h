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
	int* dp = new int[str.size()]();//dp[i]��ʾ��str[i]��β�����Ч����
	dp[0] = 0;
	int res = dp[0];
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ')')
		{
			prev = i - dp[i - 1] - 1;
			if (prev >= 0 && str[prev] == '(')
			{
				dp[i] = dp[i - 1] + 2 + (prev > 0 ? dp[prev-1] : 0);//�������������һ��Ҫע�⣬��Ŀ�����һ��Ҫ������
			}
		}
		res = Max(res, dp[i]);
	}
	return res;
}