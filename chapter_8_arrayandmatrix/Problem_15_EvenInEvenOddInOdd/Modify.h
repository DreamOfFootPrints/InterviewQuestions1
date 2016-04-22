#include<iostream>
using namespace std;


void Modify(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return;
	}

	int oddIndex = 1;
	int evenIndex = 0;
	while (oddIndex < length&&evenIndex < length)
	{
		int value = arr[length - 1];
		if ((value&0x1)==1)//Yһ��Ҫ�����ţ�Ҫ��Ȼ������ѭ��
		{
			std::swap(arr[length - 1], arr[oddIndex]);
			oddIndex += 2;
		}
		else if ((value&0x1)==0)
		{
			std::swap(arr[length - 1], arr[evenIndex]);
			evenIndex += 2;
		}
	}

}