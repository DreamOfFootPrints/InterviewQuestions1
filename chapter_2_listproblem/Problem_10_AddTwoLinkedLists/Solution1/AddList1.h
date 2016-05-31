#include"SList.h"
#include<stack>


SListNode* AddList1(SListNode* pHead1, SListNode* pHead2)
{
	if (pHead1 == NULL || pHead2 == NULL)
	{
		return pHead1 == NULL ? pHead2 : pHead1;
	}
	stack<int> t1;
	stack<int> t2;
	int step = 0;
	SListNode* cur1 = pHead1;
	SListNode* cur2 = pHead2;
	while (cur1 != NULL)
	{
		t1.push(cur1->_data);
		cur1 = cur1->_next;
	}
	while (cur2 != NULL)
	{
		t2.push(cur2->_data);
		cur2 = cur2->_next;
	}
	SListNode* newPhead = NULL;
	stack<int>& bigStack = t1.size() > t2.size() ? t1 : t2;
	stack<int>& smallStack = t1.size() > t2.size() ? t2 : t1;
	while (!smallStack.empty())
	{
		int top1 = bigStack.top();
		int top2 = smallStack.empty() == true ? 0 : smallStack.top();
		bigStack.pop();
		smallStack.pop();
		int value = top1 + top2 + step;
		PushFront(newPhead,value % 10);
		step = value >= 10 ? value/10 : 0;//其实可以直接/,不用进行判断
	}
	if (step == 1)
	{
		PushFront(newPhead, 1);
	}
	return newPhead;
}