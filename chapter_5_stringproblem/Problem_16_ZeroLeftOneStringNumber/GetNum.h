#include<iostream>
using namespace std;

//����һ���ݹ�

int Process(int index,int len)
{
	if (index == len)
		return 1;
	if (index == len - 1)
		return 2;
	return Process(index + 1, len) + Process(index + 2, len);
}

int GetNum1(int n)
{
	if (n < 1)
	{
		return 0;
	}
	Process(1,n);
}


//��������ѭ��
//��ʵ�ǻ��ڵݹ�Ľⷨ��Ҫ��Ȼ�����벻����

int GetNum2(int len)
{
	if (len < 1)
	{
		return 0;
	}
	if (len == 1)
	{
		return 1;
	}
	int pre = 1;
	int cur = 1;
	int tmp = 0;
	for (int i = 2; i < len + 1; i++)
	{
		tmp = cur;
		cur = pre + cur;
		pre = tmp;
	}
	return cur;

}