#include"PreInPosTraversal.h"




void TestGreateTree()
{
	
	int array[15] = { 1, 2, '#', 3, '#', '#', 4, 5, '#', 6, '#', 7, '#', '#', 8 };
	int len = sizeof(array) / sizeof(array[0]);
	BinaryTree<int> t(array,len,'#');
	t.PreOrder_R();
	t.InOrder_R();
	t.PosOrder_R();
	t.PreOrder_NonR();
	t.InOrder_NonR();
	t.PosOrder_NonR();
}


int main()
{
	TestGreateTree();
	system("pause");
	return 0;
}