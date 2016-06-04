#include"Num1.h"



void Test1()
{
	string express = "1^0|0|1";
	bool desired = false;
	cout << Num1(express, desired) << endl;
	express = "1";
	desired = false;
	cout << Num1(express, desired) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}