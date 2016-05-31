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
	//���ơ���rand
	while (cur!=NULL)
	{
		ListNode* next = cur->_next->_next;
		copyCur->_rand = cur->_rand == NULL ? NULL : cur->_rand->_next;//����->�п���ΪNULL��ʱ�򣬾�Ҫ�����жϣ���ϸһ��
		cur = next;
		copyCur = cur == NULL ? NULL : cur->_next;
	}
	//���
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