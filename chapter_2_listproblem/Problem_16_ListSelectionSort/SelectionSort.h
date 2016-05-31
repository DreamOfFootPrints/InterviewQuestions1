#include"SList.h"


//自己实现的，但是使用引用
SListNode* Min(SListNode*& pHead)
{
	assert(pHead != NULL);
	if (pHead->_next == NULL)
	{
		SListNode* min = pHead;
		pHead = NULL;
		return min;
	}
	SListNode* min = pHead;
	SListNode* minPrev = NULL;
	SListNode* prev = pHead;
	SListNode* cur = pHead->_next;
	while (cur!=NULL)
	{
		if (min->_data > cur->_data)
		{
			minPrev = prev;
			min = cur;
		}
		prev = cur;
		cur = cur->_next;
	}
	if (minPrev == NULL)
	{
		pHead = pHead->_next;
	}
	else
	{
		minPrev->_next = min->_next;
	}
	return min;
}


void SelectionSort(SListNode*& pHead)
{
	if (pHead == NULL)
	{
		return ;
	}
	SListNode* cur = pHead;
	SListNode* newHead = NULL;
	SListNode* newHeadCur = NULL;
	while (cur != NULL)
	{
		/*cout << "newHead" << ";";
		PrintSList(newHead);
		cout << "cur" << ";";
		PrintSList(cur);*/

		SListNode* min = Min(cur);
		if (newHead == NULL)
		{
			newHead = min;
			newHeadCur = newHead;
		}
		else
		{
			newHeadCur->_next = min;
			newHeadCur = newHeadCur->_next;
		}
	}
	pHead = newHead;
	
}