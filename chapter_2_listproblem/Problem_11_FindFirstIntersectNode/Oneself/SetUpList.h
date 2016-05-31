#include"SList.h"



SListNode* SetUpNoLoop(int length)
{
	SListNode* ret = NULL;
	for (int i = 0; i < length; ++i)
	{
		PushBack(ret, i);
	}
	return ret;
}



SListNode* SetUpLoop(int length, int cycleIndex)
{
	SListNode* pHead = NULL;
	SListNode* cur = NULL;
	SListNode* index = NULL;
	for (int i = 0; i < length; ++i)
	{
		if (cycleIndex == i)
		{
			index = cur;
			PushBack(pHead, i);

		}
		if (i == 0)
		{
			PushBack(pHead, i);
			cur = pHead;
		}
		else if (i==length-1)
		{
			cur->_next = _BuyNode(i);
		}
		else
		{
			cur->_next = _BuyNode(i);
			cur = cur->_next;
		}
	}
	cur->_next = index;
	return pHead;
}


SListNode* SetUp(int length, int cycleIndex, bool isCycle)
{
	if (length <= 0)
	{
		return NULL;
	}
	SListNode* res = NULL;
	if (isCycle)
	{
		res=SetUpLoop(length, cycleIndex);
	}
	else
	{
		res=SetUpNoLoop(length);
	}
	return res;
}


//打印有环链表的环的部分
void PrintLoopPart(SListNode* meetNode)
{
	SListNode* cur = meetNode;
	cout << cur->_data << "->";
	cur = cur->_next;
	while (cur != meetNode)
	{
		cout << cur->_data << "->";
		cur = cur->_next;
	}
	cout << "NULL" << endl;
}


//打印一个有环链表，不过当然要知道链表的长度，和环的位置
void PrintLoopSList(SListNode* pHead, int length, int indexLoopNode)
{
	if (pHead == NULL)
		return;
	SListNode* cur = pHead;
	int noLoopLength =indexLoopNode;
	while (noLoopLength)
	{
		cout << cur->_data << "->";
		noLoopLength--;
		cur = cur->_next;
	}
	cout << "    loop :  ";
	int LoopLength = length - indexLoopNode;
	while (LoopLength)
	{
		cout << cur->_data << "->";
		LoopLength--;
		cur = cur->_next;
	}
	cout << "NULL" << endl;
}


