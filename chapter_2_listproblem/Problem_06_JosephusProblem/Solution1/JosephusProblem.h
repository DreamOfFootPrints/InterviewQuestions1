#include"SList.h"



SListNode* GreateCycle(int n)
{
	SListNode* pHead = NULL;
	SListNode* cur = pHead;
	for (int i = 0; i < n; ++i)
	{
		if (pHead == NULL)
		{
			pHead = _BuyNode(i);
			cur = pHead;
		}
		else
		{
			cur->_next = _BuyNode(i);
			cur = cur->_next;
		}
	}
	cur->_next = pHead;
	return cur;
}


int  JosephusProblem(int  n,int m)
{
	if (n <= 0||m<=0)
	{
		return -1;
	}
	SListNode* prev = GreateCycle(n);
	SListNode* cur = prev->_next;
	int count = 0;
	while (cur->_next != cur)
	{
		count++;
		if (count == m)
		{
			SListNode* next = cur->_next;
			prev->_next = next;
			cout << cur->_data << endl;
			free(cur);
			cur = next;
			count = 0;
		}
		else
		{
			prev = cur;
			cur = cur->_next;
		}
	}
	return cur->_data;
}