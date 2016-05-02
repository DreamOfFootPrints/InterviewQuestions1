#include"SList.h"


SListNode*  FindMidNode1(SListNode* pHead)//ż��������ڵڶ����������Ҵγ������������������
{
	if (pHead == NULL)
	{
		return NULL;
	}
	SListNode* slow = pHead;
	SListNode* fast = pHead;
	while (fast != NULL&&fast->_next != NULL)
	{
		fast = fast->_next->_next;
		slow = slow->_next;
	}
	return slow;
}


SListNode* FindMidNode2(SListNode* pHead)//ż��������ڵ�һ���������Ҵγ������������������
{
	if (pHead == NULL)
	{
		return NULL;
	}
	SListNode* slow = pHead;
	SListNode* fast = pHead;
	while (fast != NULL&&fast->_next != NULL&&fast->_next->_next != NULL)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
	}
	return slow;
}


void RemoveMidNode1(SListNode*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	if (pHead->_next == NULL)
	{
		free(pHead);
		pHead = NULL;
	}
	else
	{
		SListNode* slow = pHead;
		SListNode* fast = pHead;
		SListNode* prev = NULL;
		while (fast != NULL&&fast->_next != NULL)
		{
			prev = slow;
			fast = fast->_next->_next;
			slow = slow->_next;
		}
		prev->_next = slow->_next;
		free(slow);
	}
}


void RemoveMidNode2(SListNode*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	if (pHead->_next==NULL)
	{
		free(pHead);
		pHead = NULL;
	}
	else if (pHead->_next->_next == NULL)
	{
		SListNode* del = pHead;
		pHead = pHead->_next;
		free(del);
	}
	else
	{
		SListNode* slow = pHead;
		SListNode* fast = pHead;
		SListNode* prev = NULL;
		while (fast!=NULL&&fast->_next!=NULL&&fast->_next->_next!=NULL)
		{
			prev = slow;
			fast = fast->_next->_next;
			slow = slow->_next;
		}
		prev->_next = slow->_next;
		free(slow);
	}
}
