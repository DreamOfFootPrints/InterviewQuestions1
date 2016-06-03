#include"GetNumChiExph.h"



void Test1()
{
	int num = 0;
	cin >> num;
	cout << Num1To9(num) << endl;
}


void Test2()
{
	int num = 0;
	cin >> num;
	cout << Num1To99(num) << endl;
}


void Test3()
{
	int num = 0;
	cin >> num;
	cout << Num1To999(num) << endl;
}

void Test4()
{
	int num = 0;
	cin >> num;
	cout << Num1To9999(num) << endl;
}




void Test5()
{
	int num = 0;
	cin >> num;
	cout << Num1To99999999(num) << endl;
}


void Test6()
{
	int num = 0;
	cin >> num;
	cout << GetNumChiExph(num) << endl;
}


int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	Test6();
	system("pause");
	return 0;
}