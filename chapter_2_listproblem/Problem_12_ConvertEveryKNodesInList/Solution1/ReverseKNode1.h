#include"SList.h"
#include<stack>


SListNode* KReverse(stack<SListNode*>& t, SListNode* fPrev, SListNode* tPos)
{
	SListNode* newHead = NULL;
	SListNode* cur = NULL;
	while (!t.empty())
	{
		SListNode* top = t.top();
		t.pop();
		if (newHead == NULL)
		{
			newHead = top;
			cur = top;
		}
		else
		{
			cur->_next = top;
			cur = cur->_next;
		}
	}
	if (fPrev != NULL)
	{
		fPrev->_next = newHead;
	}
	cur->_next = tPos;
	return cur;
}

SListNode* ReverseKNode(SListNode* pHead, int k)
{
	if (pHead == NULL)
	{
		return NULL;
	}
	stack<SListNode*> t;
	SListNode* cur = pHead;
	SListNode* newHead = NULL;
	SListNode* prev = NULL;
	while (cur != NULL)
	{
		t.push(cur);
		if (t.size() == k)
		{
			prev = KReverse(t, prev, cur->_next);//���������������򵥣��������ӵĺ���д�ڷ���������
			newHead = prev == pHead ? cur : newHead;//���ý�������fPrev��tPos
			cur = prev;								
		}
		cur = cur->_next;
	}
	return newHead;
}