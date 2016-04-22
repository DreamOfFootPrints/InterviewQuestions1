#include"NumSum.h"


void Test1()
{
	//char* str = "A1CD2E33";
	char* str = "A-1-B--2C--D6E";
	int ret = NumSum(str);
	cout << ret << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}