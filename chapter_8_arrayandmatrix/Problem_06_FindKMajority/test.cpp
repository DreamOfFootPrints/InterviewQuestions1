#include"PrintHalfMajor.h"


void Test1()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 1, 1, 1, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintHalfMajor(arr, len);
}

void Test2()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintHalfMajor(arr, len);
}


int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}