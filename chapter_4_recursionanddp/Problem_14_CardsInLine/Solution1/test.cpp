#include"Win1.h"


void Test1()
{
	//int arr[] = { 1, 2, 100, 4 };
	int arr[] = { 1, 100, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << Win1(arr, len) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}