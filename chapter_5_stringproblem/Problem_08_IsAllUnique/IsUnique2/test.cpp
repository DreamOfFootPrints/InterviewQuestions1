#include"IsUnique2.h"


void Test1()
{
	//char chs[] = { 'a', 'b', 'c' };
	char chs[] = { '1', '2', '1' };
	if (IsUnique2(chs,sizeof(chs)))
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