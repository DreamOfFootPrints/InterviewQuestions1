#include"CopyListWithRand2.h"


void Test1()
{
	ListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PrintList(list1);
	ListNode* ret = CopyListWithRand(list1);
	PrintList(ret);
	
}

int main()
{
	Test1();
	system("pause");
	return 0;
}