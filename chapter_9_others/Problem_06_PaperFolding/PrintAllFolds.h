#include<iostream>
using namespace std;


void PrintProcess(int i, int N, bool down)//中序遍历
{
	if (i > N)
	{
		return;
	}
	PrintProcess(i + 1, N, true);
	cout << (down ? "down" : "up") << endl;
	PrintProcess(i + 1, N, false);//右节点都为up
}

void PrintAllFolds(int n)
{
	PrintProcess(1, n, true);
	
}