#include"SList.h"


SListNode* ReverseSList(SListNode* pHead)
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

bool IsPalindrome(SListNode* pHead)//最后相遇的判断条件，开是否都为NULL，两段链表的最后都设置为NULL
{
	bool res = true;
	if (pHead == NULL)
	{
		return false;
	}
	SListNode* slow = pHead;
	SListNode* fast = pHead;
	while (fast != NULL&&fast->_next != NULL&&fast->_next->_next!=NULL)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
	}
	SListNode* end1 = slow;
	SListNode* cur2 = slow->_next;
	SListNode* cur1 = pHead;
	end1->_next = NULL;
	//n逆置
	cur2 = ReverseSList(cur2);
	SListNode* end2 = cur2;
	while (cur1 != NULL&&cur2 != NULL)
	{
		if (cur1->_data != cur2->_data)
		{
			res = false;
		}
		cur1 = cur1->_next;
		cur2 = cur2->_next;
	}

	cur2 = ReverseSList(end2);
	end1->_next = cur2;
	return res;
}