#include"IsRotation.h"



void Test1()
{
	string str1 = "cdab";
	string str2 = "abcd";
	if (IsRotation(str1, str2))
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}


void Test2()
{
	string str1 = "1ab2";
	string str2 = "ab12";
	if (IsRotation(str1, str2))
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}

void Test3()
{
	string str1 = "2ab1";
	string str2 = "ab12";
	if (IsRotation(str1, str2))
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}


int main()
{
	//Test1();
	Test2();
	Test3();
	system("pause");
	return 0;
}