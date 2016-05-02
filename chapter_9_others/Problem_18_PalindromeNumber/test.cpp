#include"IsPalindrome.h"



void Test1()
{
	int num = 0;
	cin >> num;
	if (IsPalindrome(num))
	{
		cout << "true" << endl;
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