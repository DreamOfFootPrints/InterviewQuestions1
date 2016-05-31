#include"SList.h"


SListNode* KReverse(SListNode* from, SListNode* to, SListNode* fPrev, SListNode* tPos)
{
	SListNode* prev = tPos;
	SListNode* cur = from;
	while (cur != tPos)
	{
		SListNode* next = cur->_next;
		cur->_next = prev;
		prev = cur;
		cur = next;
	}
	if (fPrev != NULL)
	{
		fPrev->_next = to;
	}
	return from;
}


SListNode* ReverseKNode(SListNode* pHead, int k)
{
	if (pHead == NULL || k <= 1)
	{
		return NULL;
	}
	SListNode* cur = pHead;
	SListNode* newHead = NULL;
	SListNode* from = NULL;//逆置关注下面的4个方面，但是核心是fPrev和toPos
	SListNode* to = NULL;
	SListNode* fPrev = NULL;
	SListNode* toPos = NULL;
	int count = 0;
	while (cur != NULL)
	{
		if (++count == k)
		{
			if (fPrev == NULL)
			{
				fPrev = KReverse(pHead, cur, fPrev, cur->_next);
			}
			else
			{
				fPrev = KReverse(fPrev->_next, cur, fPrev, cur->_next);

			}
			newHead = fPrev == pHead ? cur : newHead;
			cur = fPrev;
			count = 0;
		}
		cur = cur->_next;
	}
	return newHead;
}