#include"SList.h"
#include<stack>



bool IsPalindrome1(SListNode* pHead)
{
	if (pHead == NULL)
	{
		return false;
	}
	stack<SListNode*> t;
	SListNode*  cur = pHead;
	while (cur != NULL)
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



