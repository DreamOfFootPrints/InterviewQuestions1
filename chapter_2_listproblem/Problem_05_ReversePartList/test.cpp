#include"ReversePart.h"



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
	PushBack(list1, 8);
	PrintSList(list1);
	int from = 0;
	int to = 0;
	cin >> from >> to;
	SListNode* ret = ReversePart(list1, from, to);
	PrintSList(list1);

}

int main()
{
	Test1();
	system("pause");
	return 0;
}