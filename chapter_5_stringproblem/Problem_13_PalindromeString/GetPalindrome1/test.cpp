#include"GetPalindRome.h"


void Test1()
{
	string str = "ABA";
	cout << GetPalindRome(str) << endl;
	str = "AB";
	cout << GetPalindRome(str) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}