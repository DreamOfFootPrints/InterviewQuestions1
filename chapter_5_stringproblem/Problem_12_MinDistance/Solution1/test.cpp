#include"MinDistance.h"



void Test1()
{
	string strs[] = { "1", "3", "3", "2", "3", "1" };
	string str1 = "1";
	string str2 = "2";
	int len = sizeof(strs) / sizeof(strs[0]);
	cout << MinDistance(strs, len, str1, str2) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}