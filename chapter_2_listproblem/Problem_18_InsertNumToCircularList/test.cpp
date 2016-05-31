#include"InsertNum.h"


void Test1()
{
	SListNode* list1 = SetUpCycle(5);
	PrintCycle(list1);
	SListNode* ret= InsertNum(list1, 6);
	PrintCycle(ret);

}

int main()
{
	Test1();
	system("pause");
	return 0;
}