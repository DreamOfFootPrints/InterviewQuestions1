#include<iostream>
using namespace std;


int Abs(int a)
{
	return a < 0 ? -a : a;
}

bool IsValid(int record[], int i, int j)
{
	for (int k = 0; k < i; k++)
	{
		if (record[k] == j || (Abs(record[k] - j) == Abs(i - k)))
		{
			return false;
		}
	}
	return true;
}


int Process(int index, int n, int record[])//record[]不是引用
{
	int res = 0;
	if (index == n)
	{
		res = 1;
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			if (IsValid(record, index, j))
			{
				record[index] = j;
				res += Process(index + 1, n, record);
			}
		}
	}
	return res;
}


int Num1(int n)
{
	if (n <= 0)
		return -1;
	int* record = new int[n]();
	return Process(0, n, record);
}
