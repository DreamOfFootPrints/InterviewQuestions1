#include"StringAndNumberRelation.h"


void Test1()
{
	char chs[] = { 'A', 'B', 'C' };
	int len = sizeof(chs) / sizeof(chs[0]);
	string ret = GetString(chs, len, 72);
	cout << ret << endl;
}


void Test2()
{
	char chs[] = { 'A', 'B', 'C' };
	int len = sizeof(chs) / sizeof(chs[0]);
	int num = GetNum(chs, len, "ABBA");
	cout << num << endl;
}

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}