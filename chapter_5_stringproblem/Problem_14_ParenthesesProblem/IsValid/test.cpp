#include"IsValid.h"

void Test1()
{
	string str = "()";
	cout << IsValid(str) << endl;
	str = "(()())";
	cout << IsValid(str) << endl;
	str = "())";
	cout << IsValid(str) << endl;
	str = "()a()";
	cout << IsValid(str) << endl;

}


int main()
{
	Test1();
	system("pause");
	return 0;
}