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
		else if (arr[i]>arr[i-1]&&newArray[i]<newArray[i-1]+1)//ע����+1
		{
			newArray[i] = newArray[i - 1] + 1;
		}
		else if (arr[i]<arr[i-1]&&newArray[i]>newArray[i-1]-1)
		{
			newArray[i-1] = newArray[i-1] + 1;//�������һ���ط���Ҳ�Ǻ������ڣ�����Ϊ�����޸ĵ�ǰ���ֵ�����ǵ�ǰֵ
			if (i > 1)
			{
				i -= 2;//����
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