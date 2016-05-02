#include"List.h"



ListNode* ReverseList1(ListNode* pHead)////����ָ�����ص�
{
	ListNode* prev = NULL;
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		ListNode* next = cur->_next;
		cur->_next = prev;
		cur->_prev = next;//���Ĵ���
		prev = cur;
		cur = next;
	}
	return prev;
}


ListNode* ReverseList2(ListNode* pHead)//ժ�ڵ�PushBack()
{
	ListNode* newHead = NULL;
	ListNode* cur = pHead;
	while (cur != NULL)
	{ 
		ListNode* tmp = cur;
		cur = cur->_next;
		tmp->_next = newHead;
		tmp->_prev = cur;
		newHead = tmp;//ע�ⲻ��=cur
	}
	return newHead;
}