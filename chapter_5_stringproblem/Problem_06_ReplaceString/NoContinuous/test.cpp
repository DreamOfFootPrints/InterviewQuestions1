#include"Replace.h"


void Test1()
{
	/*string str = "123abc";
	string from = "abc";
	string to = "4567";*/

	/*string str = "123";
	string from = "abc";
	string to = "456";*/

	string str = "123abcabc";
	string from = "abc";
	string to = "X";

	cout << Replace(str, from, to) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}