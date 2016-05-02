#include"SList.h"


//删除倒数第k个节点
void RemoveLastKthNBode(SListNode*& pHead,int k)//不要去背它，画个图就可以理解
{
	if (pHead == NULL || k <= 0)
	{
		return;
	}
	SListNode* prev = NULL;
	SListNode* fast = pHead;
	SListNode* slow = pHead;
	while (k&&fast!=NULL)
	{
		fast = fast->_next;
		k--;
	}
	if (k >0)
	{
		return;
	}
	else if(fast==NULL)
	{
		SListNode* del = pHead;
		pHead = pHead->_next;
		free(del);
	}
	else
	{
		while (fast != NULL)
		{
			prev = slow;
			fast = fast->_next;
			slow = slow->_next;
		}
		SListNode* next = slow->_next;
		prev->_next = next;
		free(slow);
	}
}



//寻找倒数第k个节点
SListNode* FindKthNode(SListNode* pHead, int k)
{
	if (pHead == NULL || k <= 0)
	{
		return NULL;
	}
	SListNode* slow = pHead;
	SListNode* fast = pHead;
	while (k&&fast != NULL)
	{
		fast = fast->_next;
		k--;
	}
	if (k > 0)
	{
		return NULL;
	}
	while (fast != NULL)
	{
		fast = fast->_next;
		slow = slow->_next;
	}
	return slow;

}