#include"ListNode.h"



ListNode* CopyListWithRand(ListNode* pHead)
{
	if (pHead == NULL)
	{
		return NULL;
	}
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		ListNode* next = cur->_next;
		cur->_next = _BuyNode(cur->_data);
		cur->_next->_next = next;
		cur = next;
	}
	cur = pHead;
	ListNode* copyPhead = cur->_next;
	ListNode*  copyCur = copyPhead;
	//复制——rand
	while (cur!=NULL)
	{
		ListNode* next = cur->_next->_next;
		copyCur->_rand = cur->_rand == NULL ? NULL : cur->_rand->_next;//这种->有可能为NULL的时候，就要进行判断，仔细一点
		cur = next;
		copyCur = cur == NULL ? NULL : cur->_next;
	}
	//拆分
	cur = pHead;
	copyCur = copyPhead;
	while (cur!=NULL)
	{
		ListNode* next = cur->_next->_next;
		cur->_next = next;
		ListNode* copyNext = next==NULL?NULL:next->_next;
		copyCur->_next = copyNext;
		copyCur = copyNext;
		cur = next;
	}
	return copyPhead;
}