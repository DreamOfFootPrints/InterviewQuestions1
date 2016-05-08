#include"SList.h"


void PushBackNode(SListNode*& phead,SListNode*& tail, SListNode* privotNode)
{
	if (phead == NULL)
	{
		phead = privotNode;
		tail = phead;
	}
	else
	{
		tail->_next = privotNode;
		tail = tail->_next;
	}
}


SListNode* ListParation2(SListNode* pHead, int privot)
{
	if (pHead == NULL)
	{
		return NULL;
	}

	//定义大中小的三个链表
	SListNode* smallHead = NULL;
	SListNode* equalHead = NULL;
	SListNode* bigHead = NULL;
	SListNode* smallCur = NULL;
	SListNode* equalCur = NULL;
	SListNode* bigCur = NULL;
	SListNode* cur = pHead;
	
	while (cur != NULL)
	{
		if (cur->_data < privot)
		{
			PushBackNode(smallHead, smallCur, cur);
		}
		else if (cur->_data==privot)
		{
			PushBackNode(equalHead, equalCur, cur);
		}
		else
		{
			PushBackNode(bigHead, bigCur, cur);
		}
		cur = cur->_next;
	}
	bigCur ->_next=NULL;//不要忘记这句，要不然有可能产生未知的结果
	//核心代码：连接三个链表,主要看尾
	if (smallCur != NULL)
	{
		smallCur->_next = equalHead;
		if (equalCur != NULL)
		{
			equalCur->_next = bigHead;
		}
		else
		{
			smallCur->_next = bigHead;
		}
		return smallHead;
		
	}
	else
	{
		if (equalCur != NULL)
		{
			equalCur->_next = bigHead;
			return equalCur;
		}
		return bigHead;
	}

}