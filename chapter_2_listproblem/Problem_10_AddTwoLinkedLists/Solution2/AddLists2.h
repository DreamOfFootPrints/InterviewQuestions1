#include"SList.h"


SListNode* ReverseList(SListNode* phead)
{
	SListNode* prev = NULL;
	SListNode* cur = phead;
	while (cur != NULL)
	{
		SListNode* next = cur->_next;
		cur->_next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}


SListNode* AddList2(SListNode* pHead1, SListNode* pHead2)
{
	if (pHead1 == NULL || pHead2 == NULL)
	{
		return pHead1 == NULL ? pHead2 : pHead1;
	}
	SListNode* cur1 = ReverseList(pHead1);
	SListNode* cur2 = ReverseList(pHead2);
	int step = 0;
	SListNode* newPhead = NULL;
	while (cur1 != NULL || cur2 != NULL)//这时无法知道链表的长度也就无法比较进而率先以长度链表的长度进行遍历
	{
		int num1 = cur1==NULL?0:cur1->_data;
		int num2 = cur2==NULL?0:cur2->_data;
		int value = num1 + num2 + step;
		PushFront(newPhead, value % 10);
		step = value / 10;
		cur1 = cur1 == NULL ? NULL : cur1->_next;
		cur2 = cur2 == NULL ? NULL : cur2->_next;
	}
	if (step == 1)
	{
		PushFront(newPhead, step);
	}
	ReverseList(pHead1);
	ReverseList(pHead2);
	return newPhead;
}