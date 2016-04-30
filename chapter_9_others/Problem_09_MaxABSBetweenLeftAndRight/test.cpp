#include"MaxABS.h"


void Test1()
{
	int arr[] = { 2, 7, 3, 1, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << MaxABS1(arr, len) << endl;
	cout << MaxABS2(arr, len) << endl;
	cout << MaxABS3(arr, len) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}