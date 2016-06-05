#include"IsMatch.h"


void Test1()
{
	string str = "abc";
	string exp = "abc";
	cout << IsMatch(str, exp) << endl;
	str = "abc";
	exp = "a.c";
	cout << IsMatch(str, exp) << endl;
	str = "a";
	exp = ".*";
	cout << IsMatch(str, exp) << endl;
	str = "";
	exp = "..*";
	cout << IsMatch(str, exp) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}