#include"SList.h"



//���õ�����

SListNode* ReverseSList1(SListNode* pHead)//����ָ�����ص�
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



SListNode* ReverseSList2(SListNode* pHead)//ժ�ڵ�PushBack()
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


