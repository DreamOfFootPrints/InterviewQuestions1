#include<iostream>
using namespace std;



bool g_InvalidInput = false;
void PrintHalfMajor(int arr[], int length)
{
	g_InvalidInput = false;
	if (arr == NULL || length <= 0)
	{
		g_InvalidInput = true;
		return ;
	}
	int times = 0;
	int cand = 0;
	for (int i = 0; i < length; ++i)
	{
		if (times == 0)
		{
			cand = arr[i];
			times = 1;
		}
		else if (cand == arr[i])
		{
			times++;
		}
		else
		{
			times--;
		}
	}
	if (times == 0)
	{
		cout << "no suc number" << endl;
	}
	times = 0;
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == cand)
			times++;
	}

	if (times > length / 2)
		cout << cand << endl;
	else
		cout << "no such number" << endl;





}