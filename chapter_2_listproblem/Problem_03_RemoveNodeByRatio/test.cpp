#include"RemoveMidNode.h"


void Test1()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PushBack(list1, 6);
	//PushBack(list1, 7);
	PrintSList(list1);
	SListNode* ret = FindMidNode1(list1);
	PrintSList(ret);
}

void Test2()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PrintSList(list1);
	SListNode* ret = FindMidNode1(list1);
	PrintSList(ret);
}


void Test3()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PrintSList(list1);
	SListNode* ret = FindMidNode1(list1);
	PrintSList(ret);
}


void Test4()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	PushBack(list1, 5);
	PushBack(list1, 6);
	PrintSList(list1);
	SListNode* ret = FindMidNode2(list1);
	PrintSList(ret);
}


void Test5()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PrintSList(list1);
	SListNode* ret = FindMidNode2(list1);
	PrintSList(ret);
}




void Test6()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PrintSList(list1);
	SListNode* ret = FindMidNode2(list1);
	PrintSList(ret);
}

void TestFind()
{
	//Test1();//测试第一个函数
	//Test2();
	//Test3();
	//Test4();

	Test5();
	Test6();
}

void Test7()
{
	SListNode* list1 = NULL;
	PushBack(list1, 1);
	PushBack(list1, 2);
	PushBack(list1, 3);
	PushBack(list1, 4);
	/*PushBack(list1, 5);
	PushBack(list1, 6);
	PushBack(list1, 7);*/
	PrintSList(list1);
	SListNode* ret = FindMidNode1(list1);
	PrintSList(ret);
	RemoveMidNode1(list1);
	PrintSList(list1);
}




void Test8()
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
	SListNode* ret = FindMidNode2(list1);
	PrintSList(ret);
	RemoveMidNode2(list1);
	PrintSList(list1);
}

void TestRemove()
{
	//Test7();
	Test8();
}


int main()
{
	//TestFind();
	TestRemove();

	system("pause");
	return 0;
}