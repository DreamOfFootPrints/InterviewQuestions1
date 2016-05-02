#include"Reverse.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintSList(list1);
	SListNode* ret = ReverseSList1(list1);
	PrintSList(ret);
}


void Test2()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintSList(list1);
	SListNode* ret = ReverseSList2(list1);
	PrintSList(ret);
}



int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}