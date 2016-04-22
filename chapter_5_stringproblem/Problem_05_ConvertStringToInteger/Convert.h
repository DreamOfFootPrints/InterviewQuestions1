#include<iostream>
#include<string>
using namespace std;


bool IsValid(char str[])
{
	int len = strlen(str);
	if (str[0] != '-' && (str[0]<'0' || str[0]>'9'))
	{
		return false;
	}
	if (str[0] == '-' && (len == 1 || str[2] == '0'))
	{
		return false;
	}
	if (str[0] == '0'&&len > 2)
	{
		return false;
	}
	for (int i = 1; i < len; ++i)//i从1开始
	{
		if (str[i]<'0' || str[0]>'9')
			return false;
	}
	return true;
}


bool g_InvalidInput = false;
int Convert(char str[])
{
	g_InvalidInput = false;
	if (str == NULL||strlen(str)<=0)
	{
		g_InvalidInput = true;
		return 0;
	}
	if (!IsValid(str))
	{
		g_InvalidInput = true;
		return 0;
	}
	bool posi = str[0] == '-' ? false : true;
	int sum = str[0]=='-'?0:'0'-str[0];
	int Min = (int)0x80000000;
	int minQ = Min / 10;
	int minR = Min % 10;
	for (int i = 1; i < strlen(str); ++i)//先只看数字位，不看符号位，假如为负，则刚好，不为负数的话，最后变一下就可以了
	{
		int cur = '0' - str[i];
		if (sum < minQ || (sum == minQ&&cur < minR))//首先sum一定不会溢出，这是前提保证
		{
			return 0;
		}
		sum = sum * 10 + cur;
	}
	if (posi&&sum == Min)
	{
		return 0;
	}
	return posi ? -1*sum : sum;
}
