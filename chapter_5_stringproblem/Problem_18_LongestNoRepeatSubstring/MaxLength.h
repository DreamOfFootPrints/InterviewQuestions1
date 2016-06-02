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
	{
		return 0;
	}
	int map[256] = { 0 };
	for (int i = 0; i < 256; i++)
	{
		map[i] = -1;
	}
	int len = 0;
	int prev = -1;//����һ���ַ�Ϊ��β�Ӵ���ʼ��λ��
	int cur = 0;
	for (int i = 0; i < str.size(); i++)
	{
		prev = Max(prev, map[str[i]]);
		cur = i - prev;
		len = Max(len, cur);
		map[str[i]] = i;
	}
	return len;




}