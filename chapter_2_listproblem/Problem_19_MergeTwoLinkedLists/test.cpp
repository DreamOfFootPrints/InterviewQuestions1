#include"Merge.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PushBack(list1, 6);
	PushBack(list1, 7);
	PrintSList(list1);
	SListNode* list2 = NULL;
	PushBack(list2, 1);
	PushBack(list2, 3);
	PushBack(list2, 5);
	PushBack(list2, 7);
	PushBack(list2, 9);
	PushBack(list2, 13);
	PushBack(list2, 15);
	PrintSList(list2);
	SListNode* ret = Merge(list1, list2);
	PrintSList(ret);

}

int main()
{
	Test1();
	system("pause");
	return 0;
}