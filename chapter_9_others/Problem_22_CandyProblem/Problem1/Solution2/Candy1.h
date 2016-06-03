#include<iostream>
using namespace std;


int Candy1(int arr[], int length)
{
	if (arr ==  NULL || length<=0)
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
		if (arr[i] == arr[i - 1])
		{
			newArray[i] = newArray[i];
		}
		else if (arr[i]>arr[i-1]&&newArray[i]<newArray[i-1]+1)//注意是+1
		{
			newArray[i] = newArray[i - 1] + 1;
		}
		else if (arr[i]<arr[i-1]&&newArray[i]>newArray[i-1]-1)
		{
			newArray[i-1] = newArray[i-1] + 1;//最特殊的一个地方，也是核心所在，是因为这里修改的前面的值而不是当前值
			if (i > 1)
			{
				i -= 2;//巧妙
			}
		}
	}
	int res = 0;
	for (int i = 0; i < length; ++i)
	{
		res += newArray[i];
	}
	return res;
}