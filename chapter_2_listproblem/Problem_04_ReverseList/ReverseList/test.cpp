#include"Reverse.h"

void Test1()
{
	ListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintList(list1);
	ListNode* ret = ReverseList1(list1);
	PrintList(ret);
}

void Test2()
{
	ListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintList(list1);
	ListNode* ret = ReverseList2(list1);
	PrintList(ret);
}

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}