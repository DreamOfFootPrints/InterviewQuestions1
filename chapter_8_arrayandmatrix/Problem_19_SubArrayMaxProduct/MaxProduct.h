#include<iostream>
using namespace std;

double Max(double a, double b)
{
	return a > b ? a : b;
}

double Min(double a, double b)
{
	return a < b ? a : b;
}


double MaxProduct(double arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return 0;
	}
	double min = arr[0];
	double max = arr[0];
	double res = arr[0];
	double maxEnd = 0;
	double minEnd = 0;
	for (int i = 1; i < length; ++i)
	{
		minEnd =min*arr[i];
		maxEnd = max*arr[i];
		max = Max(Max(minEnd, maxEnd), arr[i]);
		min = Min(Min(maxEnd, minEnd), arr[i]);
		res = Max(res, max);
	}
	return res;
}