#include"SList.h"



//逆置单链表

SListNode* ReverseSList1(SListNode* pHead)//三个指针来回倒
{
	SListNode* prev = NULL;
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		SListNode* next = cur->_next;
		cur->_next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}



SListNode* ReverseSList2(SListNode* pHead)//摘节点PushBack()
{
	SListNode* newHead = NULL;
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		SListNode* tmp = cur;
		cur = cur->_next;
		tmp->_next = newHead;
		newHead = tmp;
	}
	return newHead;
}


