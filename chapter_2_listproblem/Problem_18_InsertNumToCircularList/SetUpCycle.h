#include"SList.h"


SListNode* SetUpCycle(int length)
{
	if (length <= 0)
	{
		return NULL;
	}
	SListNode* newHead = NULL;
	SListNode* cur = NULL;
	for (int i = 0; i < length; ++i)
	{
		SListNode* tmp = _BuyNode(i);
		if (cur == NULL)
		{
			newHead = tmp;
			cur = tmp;
		}
		else
		{
			cur->_next = tmp;
			cur = tmp;
		}
	}
	cur->_next = newHead;
	return newHead;
}


void PrintCycle(SListNode* pHead)
{
	if (pHead == NULL)
		return;
	SListNode* cur = pHead;
	cout << cur->_data << "->";
	cur = cur->_next;
	while (cur!=pHead)
	{
		cout << cur->_data << "->";
		cur = cur->_next;
	}
	cout << "NULL" << endl;
}