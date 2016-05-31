#include"AddList1.h"

void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintSList(list1);
	SListNode* list2 = NULL;
	PushBack(list2, 2);
	PushBack(list2, 3);
	PushBack(list2, 4);
	PushBack(list2, 5);
	PushBack(list2, 6);
	PrintSList(list2);
	SListNode* ret = AddList1(list1, list2);
	PrintSList(ret);

}


void Test2()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PushBack(list1, 1);
	PrintSList(list1);
	SListNode* list2 = NULL;
	PushBack(list2, 9);
	PushBack(list2, 9);
	PushBack(list2, 9);
	PushBack(list2, 9);
	PushBack(list2, 9);
	PrintSList(list2);
	SListNode* ret = AddList1(list1, list2);
	PrintSList(ret);

}

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}
