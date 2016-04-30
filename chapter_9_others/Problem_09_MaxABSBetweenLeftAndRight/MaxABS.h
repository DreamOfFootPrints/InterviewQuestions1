#include<iostream>
#include<math.h>
using namespace std;


int Max(int a, int b)
{
	return a > b ? a : b;
}



int MaxABS1(int arr[],int length)
{
	int res = (int)0x80000000;
	int maxLeft = 0;
	int maxRight = 0;
	for (int i = 0; i < length; ++i)
	{
		maxLeft = (int)0x80000000;
		for (int j = 0; j <= i; ++j)
		{
			maxLeft = Max(arr[j], maxLeft);
		}
		maxRight = (int)0x80000000;
		for (int j = i + 1; j < length; ++j)
		{
			maxRight = Max(arr[j], maxRight);
		}
		res = Max(abs(maxLeft-maxRight), res);
	}
	return res;
}


bool g_InvalidInput = false;
int MaxABS2(int arr[], int length)
{
	g_InvalidInput = false;
	if (arr == NULL || length <= 0)
	{
		g_InvalidInput = true;
		return -1;
	}
	int* leftArr = new int[length]();
	int* rightArr = new int[length]();
	leftArr[0] = arr[0];
	rightArr[length-1] = arr[length-1];
	for (int i = 1; i < length; ++i)
	{
		leftArr[i] = Max(leftArr[i - 1], arr[i]);
	}
	for (int i = length - 2; i >= 0; --i)
	{
		rightArr[i] = Max(arr[i], rightArr[i - 1]);
	}
	int res = (int)0x80000000;
	for (int i = 0; i < length-1; i++)
	{
		res = Max(res, abs(leftArr[i] - rightArr[i+1]));
	}
	return res;
}




int MaxABS3(int arr[], int length)
{
	g_InvalidInput = false;
	if (arr == NULL || length <= 0)
	{
		g_InvalidInput = true;
		return -1;
	}
	int max = arr[0];
	for (int i = 0; i < length; ++i)
	{
		max = Max(max, arr[i]);
	}
	return Max(max - arr[0], max - arr[length - 1]);
}