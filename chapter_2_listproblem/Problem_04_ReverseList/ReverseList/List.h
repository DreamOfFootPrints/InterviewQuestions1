#include<iostream>
#include<assert.h>
using namespace std;


typedef int DataType;

typedef struct ListNode
{
	DataType _data;
	ListNode* _prev;
	ListNode* _next;
}ListNode;


//声明

ListNode* _BuyNode(DataType x);
void PrintList(ListNode* pHead);

void PushBack(ListNode*& pHead, DataType x);
void PopBack(ListNode*& pHead);
void PushFront(ListNode*& pHead, DataType x);
void PopFront(ListNode*& pHead);

ListNode* Find(ListNode* pHead, DataType x);
void Insert(ListNode* pos, DataType x);
void Erase(ListNode*& pHead, ListNode* pos);
void _Destory(ListNode*& pHead);


//具体实现

ListNode* _BuyNode(DataType x)
{
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	tmp->_data = x;
	tmp->_prev = NULL;
	tmp->_next = NULL;
	return tmp;
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



void PushBack(ListNode*& pHead, DataType x)
{
	if (pHead == NULL)
	{
		pHead = _BuyNode(x);
	}
	else
	{
		ListNode* cur = pHead;
		while (cur->_next != NULL)
		{
			cur = cur->_next;
		}
		ListNode* tmp = _BuyNode(x);
		cur->_next = tmp;
		tmp->_prev = cur;
	}
}


void PopBack(ListNode*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	else if (pHead->_next == NULL)
	{
		free(pHead);
		pHead = NULL;
	}
	else
	{
		ListNode* cur = pHead;
		ListNode* prev = NULL;
		while (cur->_next != NULL)
		{
			prev = cur;
			cur = cur->_next;
		}
		prev->_next = NULL;
		free(cur);	
	}
}



void PushFront(ListNode*& pHead, DataType x)
{
	if (pHead == NULL)
	{
		pHead = _BuyNode(x);
	}
	else
	{
		ListNode* tmp = _BuyNode(x);
		tmp->_next = pHead;
		pHead->_prev = tmp;
		pHead = tmp;
	}
}



void PopFront(ListNode*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	else if (pHead->_next==NULL)
	{
		free(pHead);
		pHead = NULL;
	}
	else
	{
		ListNode* del = pHead;
		pHead = pHead->_next;
		pHead->_prev = NULL;
		free(del);
	}
}



ListNode* Find(ListNode* pHead, DataType x)
{
	assert(pHead);
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}



void Insert(ListNode* pos, DataType x)
{
	assert(pos);
	ListNode* tmp = _BuyNode(x);
	ListNode* next = pos->_next;
	pos->_next = tmp;
	tmp->_prev = pos;
	tmp->_next = next;
	if (next != NULL)
	{
		next->_prev = tmp;
	}

}


void Erase(ListNode*& pHead, ListNode* pos)
{
	assert(pHead);
	assert(pos);
	if (pHead == pos)
	{
		pHead = pHead->_next;
		free(pos);
	}
	else
	{
		ListNode* cur = pHead;
		ListNode* prev = NULL;
		while (cur != NULL)
		{
			prev = cur;
			cur = cur->_next;
			if (cur==pos)
			{
				ListNode* next = pos->_next;
				prev->_next = next;
				free(pos);
				if (next != NULL)
				{
					next->_prev = prev;
				}
				break;
			}
		}
	}

}



void _Destory(ListNode*& pHead)
{
	ListNode* cur = pHead;
	while (cur != NULL)
	{
		ListNode* del = cur;
		cur = cur->_next;
		free(del);
	}
	pHead = NULL;
}
