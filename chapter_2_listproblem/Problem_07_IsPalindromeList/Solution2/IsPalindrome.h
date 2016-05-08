#include"SList.h"
#include<stack>


bool IsPalindrome2(SListNode* pHead)
{
	if (pHead == NULL)
	{
		return false;
	}
	SListNode* slow = pHead;
	SListNode* fast = pHead;
	while (fast != NULL && fast->_next != NULL)
	{
		fast = fast->_next->_next;
		slow = slow->_next;
	}
	stack<SListNode*> t;
	SListNode* cur = slow;
	while (cur != -NULL)
	{
		t.push(cur);
		cur = cur->_next;
	}
	cur = pHead;
	while (!t.empty())
	{
		SListNode* top = t.top();
		if (top->_data != cur->_data)
		{
			return false;
		}
		t.pop();
		cur = cur->_next;
	}
	return true;
}