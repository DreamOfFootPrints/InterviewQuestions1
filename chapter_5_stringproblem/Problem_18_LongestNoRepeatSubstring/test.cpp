#include"MaxLength.h"

void Test1()
{
	string str = "abcd";
	cout << MaxLength(str) << endl;
	str = "aabcb";
	cout << MaxLength(str) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}