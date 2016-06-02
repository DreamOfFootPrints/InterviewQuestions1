#include"MinCut.h"


void Test1()
{
	string str = "ABA";
	cout << MinCut(str) << endl;
	str = "ACDCDCDAD";
	cout << MinCut(str) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}