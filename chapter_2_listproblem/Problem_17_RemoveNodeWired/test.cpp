#include"RemoveNodeWirde.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintSList(list1);
	RemoveNodeWired(list1->_next->_next);
	PrintSList(list1);
}


int main()
{
	Test1();
	system("pause");
	return 0;
}