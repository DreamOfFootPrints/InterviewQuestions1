#include"GetInterSectNode.h"



void TestIsCycle()
{
	SListNode* list1 = SetUpNoLoop(10);
	SListNode* list2 = SetUpLoop(5, 2);
	if (IsCycle(list1))
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}


void TestCycleNode()
{
	SListNode* list1 = SetUpLoop(10, 5);
	SListNode* meet = GetLoopNode(list1);
	PrintLoopPart(meet);
}


void TestTwoNoLoopIsIntersect()
{
	SListNode* list1 = SetUpNoLoop(20);
	SListNode* list2 = SetUpNoLoop(10);
	//SListNode* meet = TwoNoLoopIsIntersect(list, list->_next->_next->_next);
	SListNode* meet = TwoNoLoopIsIntersect(list1, list2,NULL,NULL);
	PrintSList(meet);
}

void TestwoLoopIsIntersect()
{
	/*SListNode* list1 = SetUpLoop(10, 5);
	SListNode* list2 = SetUpLoop(10, 6);
	SListNode* meet = TwoLoopSlistIntersect(list1, list2);
	PrintSList(meet);*/

	SListNode* list1 = SetUpLoop(15, 5);
	PrintLoopSList(list1, 15, 5);
	SListNode* meet = TwoLoopSlistIntersect(list1, list1->_next->_next);
	PrintLoopSList(meet, 12, 2);
}



void TestGetInterSectNode()
{
	SListNode* list1 = SetUpLoop(10,5);
	SListNode* list2 = SetUpNoLoop(10);
	SListNode* meet = GetInterSectNode(list1, list2);
	PrintSList(meet);
}

int main()
{
	//TestIsCycle();
	//TestCycleNode();
	//TestTwoNoLoopIsIntersect();
	//TestwoLoopIsIntersect();
	TestGetInterSectNode();
	system("pause");
	return 0;
}