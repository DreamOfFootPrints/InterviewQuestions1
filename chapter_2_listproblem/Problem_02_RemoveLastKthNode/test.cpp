#include"RemoveLastKthNode.h"


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
	RemoveLastKthNBode(list1, 7);
	PrintSList(list1);

}


void Test2()
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
	SListNode* ret = FindKthNode(list1, 2);
	PrintSList(ret);
	ret = FindKthNode(list1, 7);
	PrintSList(ret);
	ret = FindKthNode(list1, 8);
	PrintSList(ret);

}

int main()
{
	//Test1();//����ɾ��������k���ڵ�ĺ���
	Test2();//����Ѱ�ҵ�����k���ڵ�ĺ���
	system("pause");
	return 0;
}




