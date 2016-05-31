#include"Replace.h"






void Test1()
{
	string str = "123abc";
	string from = "abc";
	string to = "4567";
	Replace(str, from, to);
	cout << str << endl;
}


void Test2()
{
	string str = "123";
	string from = "abc";
	string to = "456";
	Replace(str, from, to);
	cout << str << endl;
}



void Test3()
{
	string str = "123abcabc";
	string from = "abc";
	string to = "X";
	Replace(str, from, to);
	cout << str << endl;
}

int main()
{
	Test1();
	Test2();
	Test3();
	system("pause");
	return 0;
}