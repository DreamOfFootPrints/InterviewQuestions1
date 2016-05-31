#include"Modify.h"


void Test1()
{
	char str[] = "12**345";
	Modify(str, strlen(str));
	cout << str << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}