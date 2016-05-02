#include"List.h"



ListNode* ReverseList1(ListNode* pHead)////三个指针来回倒
{
	ListNode* prev = NULL;
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		ListNode* next = cur->_next;
		cur->_next = prev;
		cur->_prev = next;//核心代码
		prev = cur;
		cur = next;
	}
	return prev;
}


ListNode* ReverseList2(ListNode* pHead)//摘节点PushBack()
{
	ListNode* newHead = NULL;
	ListNode* cur = pHead;
	while (cur != NULL)
	{ 
		ListNode* tmp = cur;
		cur = cur->_next;
		tmp->_next = newHead;
		tmp->_prev = cur;
		newHead = tmp;//注意不是=cur
	}
	return newHead;
}