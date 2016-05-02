#include<iostream>
using namespace std;

int Get1Nums(int num)
{
	int count = 0;
	while (num != 0)
	{
		if (num % 10 == 1)
		{
			count++;
		}
		num /= 10;
	}
	return count;
}


int Solution(int num)
{
	if (num < 1)
	{
		return 0;
	}
	int count = 0;
	for (int i = 0; i <= num; ++i)
	{
		count += Get1Nums(i);
	}
	return count;
}


