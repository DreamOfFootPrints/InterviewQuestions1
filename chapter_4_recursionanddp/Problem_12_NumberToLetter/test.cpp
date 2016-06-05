#include"Num1.h"


void Test1()
{
	string str = "1111";
	cout << Num1(str) << endl;
	str = "01";
	cout << Num1(str) << endl;
	str = "10";
	cout << Num1(str) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}