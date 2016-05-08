#include"SList.h"


SListNode*  ReversePart(SListNode*& pHead, int from, int to)//��from����to��֮��Ľڵ�
{
	if (pHead == NULL || from <= 0 || to <= 0||from>to)
	{
		return NULL;
	}
	int len = 0;
	SListNode* cur = pHead;
	SListNode* fPrev = NULL;//һ��Ҫץס����ؼ��㣬��Ҫfrom��ǰһ���ڵ��to�ĺ�һ���ڵ�
	SListNode* tPos = NULL;
	while (cur != NULL)
	{
		len++;
		fPrev = len == from - 1 ? cur : fPrev;
		tPos = len == to + 1 ? cur :tPos;
		cur = cur->_next;
	}
	if (from > len || to > len)
	{			
		return NULL;
	}
	SListNode* prev = tPos;//prevֱ������tPos��ǰ��
	cur = fPrev == NULL ? pHead : fPrev->_next;
	while (cur != tPos)
	{
		SListNode* next = cur->_next;
		cur->_next = prev;
		prev = cur;
		cur = next;
	}
	if (fPrev == NULL)
	{
		pHead = prev;
	}
	else
	{
		fPrev->_next = prev;
	}
	return pHead;
}
