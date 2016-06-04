#include"GetPalindrome2.h"


void Test1()
{
	string str = "A1B21C";
	string strlps = "121";
	cout << GetPalindrome2(str, strlps) << endl;
	str = "A1BC22DE1F";
	strlps = "1221";
	cout << GetPalindrome2(str, strlps) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}