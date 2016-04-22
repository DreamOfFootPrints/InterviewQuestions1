#include<iostream>
using namespace std;



bool g_InvalidInput = false;
int NumSum(char str[])
{
	g_InvalidInput = false;
	if (str == NULL)
	{
		g_InvalidInput = true;
		return -1;
	}
	int len = strlen(str);
	int num = 0;
	int sum = 0;
	bool posi = true;
	for (int i = 0; i < len; ++i)
	{
		int cur = str[i]-'0';
		if (str[i] != '-'&&(cur<0||cur>9))
		{
			sum +=num;
			num = 0;
		}
		else if (str[i] == '-')
		{
			if (i == 0 || str[i] == '-')
			{
				posi = !posi;
			}
			else
			{
				sum += num;
				posi = false;
				num = 0;
			}
		}
		else
		{
			num = num * 10 + (posi ? 1 : -1)*cur;
		}
	}
	sum += num;
	return sum;
}