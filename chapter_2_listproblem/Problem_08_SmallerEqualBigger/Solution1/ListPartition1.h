#include"SList.h"
#include<assert.h>

int GetLength(SListNode* pHead)
{
	int length = 0;
	SListNode* cur = pHead;
	while (cur)
	{
		length++;
		cur = cur->_next;
	}
	return length;
}


void BubbleSort(int arr[], int length)
{
	assert(arr != NULL);
	assert(length >=0 );
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
		}
	}
}

SListNode* ListPartition1(SListNode* pHead,int pivot)
{
	if (pHead == NULL)
	{
		return NULL;
	}
	int length = GetLength(pHead);
	int* newArr = new int[length]();
	SListNode* cur = pHead;
	for (size_t i = 0; i < length; ++i)
	{
		newArr[i] = cur->_data;
		cur = cur->_next;
	}
	
	BubbleSort(newArr, length);


	cur = pHead;
	for (int i = 0; i < length; ++i)
	{
		cur->_data = newArr[i];
		cur = cur->_next;
	}
	return pHead;
}
