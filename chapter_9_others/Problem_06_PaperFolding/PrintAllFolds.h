#include<iostream>
using namespace std;


void PrintProcess(int i, int N, bool down)//�������
{
	if (i > N)
	{
		return;
	}
	PrintProcess(i + 1, N, true);
	cout << (down ? "down" : "up") << endl;
	PrintProcess(i + 1, N, false);//�ҽڵ㶼Ϊup
}

void PrintAllFolds(int n)
{
	PrintProcess(1, n, true);
	
}