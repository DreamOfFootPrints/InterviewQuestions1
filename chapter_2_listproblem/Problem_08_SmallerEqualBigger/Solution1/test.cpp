#include"ListPartition1.h"



void Test1()
{

	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 11);
	PushBack(list1, 1);
	PushBack(list1, 12);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 13);
	PushBack(list1, 1);
	PushBack(list1, 14);
	PushBack(list1, 1);
	PushBack(list1, 15);

	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintSList(list1);
	ListPartition1(list1, 5);
	PrintSList(list1);
}

int main()
{
	Test1();
	system("pause");
	return 0;
}