#include"Candy1.h"



void Test1()
{
	//int arr[] = { 1, 2, 2 };
	int arr[] = { 1, 4, 5, 9, 3, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << Candy1(arr, len) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}