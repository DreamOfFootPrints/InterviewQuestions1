#include<iostream>
using namespace std;


int ZeroNum1(int num)
{
	if (num < 0)
	{
		return 0;
	}
	int res = 0;
	int cur = 0;
	for (int i = 5; i <= num; i += 5)
	{
		cur = i;
		while (cur%5==0)
		{
			res++;
			cur /= 5;
		}
	}
	return res;
}



int ZeroNum2(int num)//看分别有多少5、25、125、
{
	if (num < 0)
		return 0;
	int res = 0;
	while (num != 0)
	{
		num /= 5;
		res += num;
	}
	return res;
}