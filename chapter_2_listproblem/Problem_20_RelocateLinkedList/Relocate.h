#include"SList.h"



void Relocate(SListNode* pHead)
{
	if (pHead == NULL||pHead->_next ==NULL||pHead->_next ->_next ==NULL)
	{	
		return ;
	}
	SListNode* fast = pHead;
	SListNode* slow = pHead;
	while (fast != NULL&&fast->_next != NULL)
	{
		fast = fast->_next->_next ;
		slow = slow->_next;
	}
	SListNode* leftCur = pHead;
	SListNode* rightCur = slow;
	while (leftCur->_next  != slow)//注意这里是slow
	{
		SListNode* leftNext = leftCur->_next;
		SListNode* rightNext = rightCur->_next;
		leftCur->_next = rightCur;
		rightCur->_next = leftNext;
		leftCur = leftNext;
		rightCur = rightNext;
	}
	leftCur->_next = rightCur;

}