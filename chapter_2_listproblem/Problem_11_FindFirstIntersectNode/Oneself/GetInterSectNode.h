#include"SetUpList.h"

//�ж��Ƿ����
bool IsCycle(SListNode* pHead)
{
	if (pHead==NULL)
	{
		return NULL;
	}
	SListNode* fast = pHead;
	SListNode* slow = pHead;
	while (fast != NULL&&fast->_next != NULL)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}

//������������ػ�����ڽڵ㣬�����������򷵻�NULL
SListNode* GetLoopNode(SListNode* pHead)
{
	if (pHead == NULL)
	{
		return NULL;
	}
	SListNode* fast = pHead;
	SListNode* slow = pHead;
	while (fast != NULL&&fast->_next != NULL)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
		if (slow == fast)
		{
			break;
		}
	}
	if (fast == NULL)
	{
		return NULL;
	}
	 slow = pHead;
	while (slow != fast)
	{
		slow = slow->_next;
		fast = fast->_next;
	}
	return slow;
}


//�޻�����ĳ��ȣ��������һ���ڵ�
SListNode* GetLengthNoLoopAndReturnEndNode(SListNode* pHead,int* length,SListNode* LoopNode)
{											//���ڻ��θ��ô˺����������������һ��������������ֵΪ������ڽڵ㣬��Ȼ��û�л��������ΪNULL
	if (pHead == NULL)
	{
		*length = 1;
		return NULL;
	}
	SListNode* cur = pHead;
	int count = 0;
	while (cur->_next != LoopNode)
	{
		count++;
		cur = cur->_next;
	}
	*length = count + 1;
	return cur;
}

//�����ֵ
int Abs(int num)
{
	return num > 0 ? num : -num;
}


//��ȡ�����޻�����Ľ���
SListNode* TwoNoLoopIsIntersect(SListNode* pHead1, SListNode* pHead2,SListNode* loopNode1,SListNode* LoopNode2)
{																//���ڻ��θ����������������������
	if (pHead1 == NULL || pHead2 == NULL)
	{
		return false;
	}
	int len1 = 0;
	int len2 = 0;
	SListNode* end1 = GetLengthNoLoopAndReturnEndNode(pHead1,&len1,loopNode1);
	SListNode* end2 = GetLengthNoLoopAndReturnEndNode(pHead2,&len2,LoopNode2);
	if (end1 != end2)
	{
		return NULL;
	}
	SListNode* cur1 = len1 > len2 ? pHead1 : pHead2;
	SListNode* cur2 = cur1 == pHead1 ? pHead2 : pHead1;
	int count = Abs(len1 - len2);
	while (count)
	{
		cur1 = cur1->_next;
		count--;
	}
	SListNode* meet = end1;
	while (cur1 != end1&&cur2 != end2)
	{
		if (cur1 == cur2)
		{
			meet = cur1;
			break;
		}
		cur1 = cur1->_next;
		cur2 = cur2->_next;
	}
	return meet;
}


//�����л�������ཻ
SListNode* TwoLoopSlistIntersect(SListNode* pHead1, SListNode* pHead2)
{
	SListNode* loopNode1 = GetLoopNode(pHead1);
	SListNode* loopNode2 = GetLoopNode(pHead2);
	SListNode* meet = NULL;
	if (loopNode1 == loopNode2)
	{
		meet = TwoNoLoopIsIntersect(pHead1, pHead2,loopNode1,loopNode2);
	}
	else
	{
		SListNode* cur1 = loopNode1;
		while (cur1->_next != loopNode1)
		{
			if (cur1 == loopNode2)
			{
				meet = cur1;
				break;
			}
			cur1 = cur1->_next;
		}
	}
	return meet;
}



//�ܴ���
SListNode* GetInterSectNode(SListNode* pHead1, SListNode* pHead2)
{
	if (pHead1 == NULL || pHead2 == NULL)
	{
		return NULL;
	}
	SListNode* loopNode1 = GetLoopNode(pHead1);
	SListNode* loopNode2 = GetLoopNode(pHead2);
	SListNode* meet = NULL;
	if (loopNode1 == NULL&&loopNode2 == NULL)
	{
		meet = TwoNoLoopIsIntersect(pHead1, pHead2, NULL, NULL);
	}
	else if (loopNode1 != NULL&&loopNode2 != NULL)
	{
		meet = TwoLoopSlistIntersect(pHead1, pHead2);
	}
	return meet;
}