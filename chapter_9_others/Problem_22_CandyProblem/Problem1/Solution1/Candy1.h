#include<iostream>
using namespace std;


int Candy1(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return 0;
	}
	int* newArray = new int[length]();
	for (int i = 0; i < length; ++i)
	{
		newArray[i] = 1;
	}
	for (int i = 1; i < length; ++i)
	{
		if (arr[i] > arr[i - 1])
		{
			newArray[i] = newArray[i - 1]+1;
		}
	}
	for (int i = length-2; i >= 0; i--)
	{
		if (arr[i] > arr[i + 1]&&newArray[i]<newArray[i+1]+1)//注意这里是+1
		{
			newArray[i]=newArray[i+1]+1;
		}
	}
	int res = 0;
	for (int i = 0; i < length; ++i)
	{
		cout << newArray[i] << endl;
		res += newArray[i];
	}
	return res;
}