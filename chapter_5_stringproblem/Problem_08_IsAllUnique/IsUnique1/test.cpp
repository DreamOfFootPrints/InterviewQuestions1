#include"IsUnqiue1.h"


void Test1()
{
	//const char* chs = "abd";
	const char* chs = "121";
	if (IsUnqiuel(chs))
	{
		cout << "pass" << endl;
	}
	else
		cout << "faile" << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}