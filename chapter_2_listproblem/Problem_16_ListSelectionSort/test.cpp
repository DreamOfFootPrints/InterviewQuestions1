#include"SelectionSort.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PushBack(list1, 2);
	PushBack(list1, 1);
	PushBack(list1, 3);
	PushBack(list1, 1);
	PushBack(list1, 8);
	PushBack(list1, 1);
	PushBack(list1, 9);
	PushBack(list1, 1);
	PrintSList(list1);
	 SelectionSort(list1);
	PrintSList(list1);


}

int main()
{
	Test1();
	system("pause");
	return 0;
}