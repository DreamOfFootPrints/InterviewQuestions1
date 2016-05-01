#include"SList.h"


void PrintCommonPart(SListNode* pHead1, SListNode* pHead2)
{
	SListNode* cur1 = pHead1;
	SListNode* cur2 = pHead2;
	while (cur1 != NULL && cur2 != NULL)
	{
		if (cur1->_data == cur2->_data)
		{
			cout << cur1->_data << "->";
			cur1 = cur1->_next;
			cur2 = cur2->_next;
		}
		else if (cur1->_data < cur2->_data)
		{
			cur1 = cur1->_next;
		}
		else
		{
			cur2 = cur2->_next;
		}
	}
	cout << "NULL" << endl;
}