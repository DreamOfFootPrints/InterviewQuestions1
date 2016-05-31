#include<iostream>
using namespace std;



void AdjustDown(char arr[], int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if ((child + 1 < size) && (arr[child + 1] > arr[child]))
		{
			child++;
		}

		if (arr[child]>arr[parent])
		{
			std::swap(arr[child], arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


void HeapSort(char* arr, int size)
{
	if (arr == NULL || size <= 0)
		return;

	for (int i = (size - 2) / 2; i >= 0; i--)//�Ӻ���ǰ����
	{
		AdjustDown(arr, size, i);
	}

	for (int i = 0; i < size; i++)
	{
		std::swap(arr[0], arr[size - 1 - i]);//���һ��λ�õ��±�
		AdjustDown(arr, size - 1 - i, 0);//���ݵĸ�����ע��������size-1-i,��Ϊ�Ѿ�������һ�ν���
	}
}

bool IsUnique2( char chas[],int length)
{
	if (chas == NULL)
		return false;
	HeapSort(chas,length);
	for (int i = 1; i < length; i++)
	{
		if (chas[i - 1] == chas[i])
			return false;
	}
	return true;
}