#include"SList.h"



SListNode* Merge(SListNode* pHead1, SListNode* pHead2)
{
	if (pHead1 == NULL || pHead2 == NULL)
	{
		return pHead1 == NULL ? pHead2 : pHead1;
	}
	SListNode* cur1 = pHead1->_data < pHead2->_data ? pHead1 : pHead2;
	SListNode* cur2 = cur1 == pHead1 ? pHead2 : pHead1;
	SListNode* prev = cur1;
	cur1 = cur1->_next;
	while (cur1 != NULL&&cur2 != NULL)
	{
		if (cur1->_data < cur2->_data)
		{
			prev = cur1;
			cur1 = cur1->_next;
		}
		else if (cur1->_data>=cur2->_data)
		{
			SListNode* next = cur2->_next;
			prev->_next = cur2;
			cur2->_next = cur1;
			prev = prev->_next;
			cur2 = next;
		}
	}
	if (cur2 != NULL)
	{
		prev->_next = cur2;
	}
	return pHead1;
}