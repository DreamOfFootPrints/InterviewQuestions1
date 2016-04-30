#include<iostream>
using namespace std;


int RightOne(int num)
{
	if (num < 1)
	{
		return -1;
	}
	int res = 0;
	while (num != 0)
	{
		num = (unsigned int)num >> 1;//用移位运算代替除法
		res += num;
	}
	return res;
}