#include"MaxLength.h"



void Test1()
{
	string str = "(()())";
	cout << MaxLength(str) << endl;
	str = "()(()()(";
	cout << MaxLength(str) << endl;

}


int main()
{
	Test1();
	system("pause");
	return 0;
}