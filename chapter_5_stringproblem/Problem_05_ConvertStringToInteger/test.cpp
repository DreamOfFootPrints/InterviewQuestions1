#include"Convert.h"


void Test1()
{
	//char* str = "123";
	//char* str = "023";
	//char* str = "A12";
	//char* str = "0";
	//char* str = "2147483647";
	//char* str = "2147483648";
	char* str = "-123";
	cout << Convert(str) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}