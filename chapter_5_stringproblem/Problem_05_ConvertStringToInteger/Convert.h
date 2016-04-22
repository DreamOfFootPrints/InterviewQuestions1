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
	for (int i = 1; i < len; ++i)//i��1��ʼ
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
	for (int i = 1; i < strlen(str); ++i)//��ֻ������λ����������λ������Ϊ������պã���Ϊ�����Ļ�������һ�¾Ϳ�����
	{
		int cur = '0' - str[i];
		if (sum < minQ || (sum == minQ&&cur < minR))//����sumһ���������������ǰ�ᱣ֤
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
