#include"GetMaxLength.h"

void Test1()
{
	int arr[] = { 1, 2, 1, 1, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 3;
	int ret=GetMaxLength(arr, len, key);
	cout << ret << endl;
}


void Test2()
{
	int arr[] = {3,3,3,3,3};
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 3;
	int ret = GetMaxLength(arr, len, key);
	cout << ret << endl;
}


int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}