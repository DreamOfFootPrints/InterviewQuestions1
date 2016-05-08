#include"IsPalindrome.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 3);
	PushBack(list1, 2);
	PushBack(list1, 1);
	PrintSList(list1);
	if (IsPalindrome2(list1))
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}


int main()
{
	Test1();
	system("pause");
	return 0;
}