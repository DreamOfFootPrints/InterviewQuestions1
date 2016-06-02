#include<iostream>
using namespace std;

int Max(int a, int b)
{
	return a > b ? a : b;
}


bool g_InvalidInput = false;
int Jump(int arr[], int len)
{
	if (arr == NULL || len <= 0)
	{
		g_InvalidInput = true;
		return 0;
	}
	int jump = 0;
	int next = 0;
	int cur = 0;
	for (int i = 0; i < len; i++)
	{
		if (cur < i)
		{
			jump++;
			cur = next;
		}
		next = Max(next, i + arr[i]);
	}
	return jump;
}