#include"SetUpCycle.h"

// ����break
SListNode* InsertNum(SListNode*& pHead, int num)
{
	SListNode* tmp = _BuyNode(num);//���ȴ����ڵ�ķ���Ҳ������Ͼ���break������
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