#include"MinLength.h"


void Test1()
{
	string str1 = "abcde";
	string str2 = "ac";
	cout << MinLength(str1, str2) << endl;
	str1 = "12345";
	str2 = "344";
	cout << MinLength(str1, str2) << endl;

}

int main()
{
	Test1();
	system("pause");
	return 0;
}