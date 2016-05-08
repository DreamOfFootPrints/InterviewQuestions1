#include"SList.h"


SListNode*  ReversePart(SListNode*& pHead, int from, int to)//第from到第to个之间的节点
{
	if (pHead == NULL || from <= 0 || to <= 0||from>to)
	{
		return NULL;
	}
	int len = 0;
	SListNode* cur = pHead;
	SListNode* fPrev = NULL;//一定要抓住这个关键点，是要from的前一个节点和to的后一个节点
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
	SListNode* prev = tPos;//prev直接链到tPos的前面
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
