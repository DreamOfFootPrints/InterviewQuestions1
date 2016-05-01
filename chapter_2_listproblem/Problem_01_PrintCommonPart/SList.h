#include<iostream>
#include<assert.h>
using namespace std;


typedef int DataType;


typedef struct SListNode
{
	DataType _data;
	struct SListNode* _next;
}SListNode;

//声明

void PushBack(SListNode*& pHead, DataType x);
void PopBack(SListNode*& pHead);
void PushFront(SListNode*& pHead, DataType x);
void PopFront(SListNode*& pHead);
SListNode* Find(SListNode* pHead, DataType x);
void Insert(SListNode* pos, DataType x);
void Erase(SListNode* pos);
void DestoryList(SListNode*& pHead);


void PrintSList(SListNode* pHead);
SListNode* _BuyNode(DataType x);

//具体实现
SListNode* _BuyNode(DataType x)
{
	SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
	tmp->_data = x;
	tmp->_next = NULL;
	return tmp;
}

void PrintSList(SListNode* pHead)
{
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		cout << cur->_data << "->";
		cur = cur->_next;
	}
	cout << "NULL" << endl;
}

void PushBack(SListNode*& pHead, DataType x)
{
	if (pHead == NULL)
	{
		pHead = _BuyNode(x);
	}
	else
	{
		SListNode* tmp = _BuyNode(x);
		SListNode* cur = pHead;
		while (cur->_next != NULL)
		{
			cur = cur->_next;
		}
		cur->_next = tmp;
	}
}

void PopBack(SListNode*& pHead)
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
		SListNode* cur = pHead;
		SListNode* prev = NULL;
		while (cur->_next != NULL)
		{
			prev = cur;
			cur = cur->_next;
		}
		free(cur);
		prev->_next = NULL;
	}
}


void PushFront(SListNode*& pHead, DataType x)
{
	if (pHead == NULL)
	{
		pHead = _BuyNode(x);
	}
	else
	{
		SListNode* tmp = _BuyNode(x);
		tmp->_next = pHead;
		pHead = tmp;
	}
}



void PopFront(SListNode*& pHead)
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
		SListNode* del = pHead;
		pHead = pHead->_next;
		free(del);
	}
}



SListNode* Find(SListNode* pHead, DataType x)
{
	assert(pHead);
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		if (cur->_data == x)
			return cur;
		cur = cur->_next;
	}
	return NULL;
}



void Insert(SListNode* pos, DataType x)
{
	assert(pos);
	SListNode* next = pos->_next;
	SListNode* tmp = _BuyNode(x);
	pos->_next = tmp;
	tmp->_next = next;
}



void Erase(SListNode* pos)
{
	assert(pos);
	assert(pos->_next);
	SListNode* del = pos->_next;
	pos->_data = del->_data;
	pos->_next = del->_next;
	free(del);
}


void DestoryList(SListNode*& pHead)
{
	SListNode* cur = pHead;
	while (cur!=NULL)
	{
		SListNode* del = cur;
		cur = cur->_next;
		free(del);
	}
	pHead = NULL;
}











