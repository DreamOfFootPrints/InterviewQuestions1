#include<iostream>
using namespace std;



bool g_InvaidInput = false;
int MaxSum(int arr[], int length)
{
	g_InvaidInput = false;
	if (arr == NULL || length <= 0)
	{
		g_InvaidInput = true;
		return -1;
	}
	int greastMax = (int)0x80000000;
	int curSum = 0;
	for (int i = 0; i < length; ++i)
	{
		curSum += arr[i];
		if (curSum > greastMax)
		{
			greastMax = curSum;
		}
		if (curSum <= 0)
			curSum = 0;
	}
	return greastMax;
}
