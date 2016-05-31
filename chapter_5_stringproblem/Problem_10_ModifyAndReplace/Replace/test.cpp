#include"Replace.h"



void Test1()
{
	char str[30] = "a b  c";
	Replace(str, sizeof(str));
	cout << str << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}