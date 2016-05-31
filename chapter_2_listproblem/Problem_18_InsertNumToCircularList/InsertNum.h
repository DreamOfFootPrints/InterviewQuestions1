#include"SetUpCycle.h"

// 巧用break
SListNode* InsertNum(SListNode*& pHead, int num)
{
	SListNode* tmp = _BuyNode(num);//事先创建节点的方法也很巧妙，毕竟和break相结合嘛
	if (pHead == NULL)
	{
		tmp->_next = tmp;
		return tmp;
	}
	SListNode* prev = pHead;
	SListNode* cur = prev->_next;
	while (cur != pHead)
	{
		if (num >= prev->_data&&num <= cur->_data)
		{
			break;
		}
		prev = cur;
		cur = cur->_next;
	}
	prev->_next = tmp;
	tmp->_next = cur;
	return num <= pHead->_data ? tmp : pHead;
}