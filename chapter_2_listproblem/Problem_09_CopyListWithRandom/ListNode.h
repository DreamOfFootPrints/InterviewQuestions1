#include<iostream>
using namespace std;

typedef int DataType;

typedef struct ListNode
{
	DataType _data;
	ListNode* _next;
	ListNode* _rand;
}ListNode;


ListNode* _BuyNode(DataType x)
{
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	tmp->_data = x;
	tmp->_next = NULL;
	tmp->_rand = NULL;
	return tmp;
}


void PushBack(ListNode*& pHead,DataType x)
{
	if (pHead == NULL)
	{
		pHead = _BuyNode(x);
	}
	else
	{
		ListNode* cur = pHead;
		while (cur->_next!=NULL)
		{
			cur = cur->_next;
		}
		cur->_next = _BuyNode(x);
	}
}


void PrintList(ListNode* pHead)
{
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		cout << cur->_data << "->";
		cur = cur->_next;
	}
	cout << "NULL" << endl;
}