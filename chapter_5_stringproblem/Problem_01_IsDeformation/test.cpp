#include"IsDeformation.h"


void Test1()
{
	char* str1 = "123";
	char* str2 = "231";
	if (IsDeformation(str1, str2))
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
	Test1();
	system("pause");
	return 0;
}