#include"ListPartition2.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 1);
	PushBack(list1, 13);
	PushBack(list1, 1);
	PushBack(list1, 12);
	PushBack(list1, 13);
	PushBack(list1, 1);

	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 5);
	PushBack(list1, 5);
	PushBack(list1, 5);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 5);
	PushBack(list1, 5);
	PushBack(list1, 5);
	PushBack(list1, 1);
	PushBack(list1, 1);

	PrintSList(list1);
	SListNode* ret= ListParation2(list1, 5);
	PrintSList(ret);
}

int main()
{
	Test1();
	system("pause");
	return 0;
}