#include"PrintCommonPart.h"


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
	PushBack(list2, 5);
	PushBack(list2, 6);
	PushBack(list2, 7);
	PrintSList(list2);
	PrintCommonPart(list1, list2);


}

int main()
{
	Test1();
	system("pause");
	return 0;
}