#include"SList.h"
#include<assert.h>


void RemoveNodeWired(SListNode* pHead)
{
	assert(pHead != NULL);
	if (pHead->_next == NULL)
	{
		cout << "ÎÞ·¨É¾³ý" << endl;
	}
	else
	{
		SListNode* del = pHead->_next;
		pHead->_data = del->_data;
		pHead->_next = del->_next;
		free(del);
	}
}