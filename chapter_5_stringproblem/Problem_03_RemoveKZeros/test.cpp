#include"RemoveKZeros.h"


void Test1()
{
	string str = "A00B";
	int k = 2;
	cout << RemoveKZeros(str, k) << endl;
}


void Test2()
{
	string str = "A0000B000";
	int k = 3;
	cout << RemoveKZeros(str, k) << endl;
}


int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}