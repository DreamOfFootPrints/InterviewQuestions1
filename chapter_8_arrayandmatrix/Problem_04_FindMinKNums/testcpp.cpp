#include"SortMinLength.h"



void Test1()
{
	int arr[] = { 1, 5, 3, 4, 2, 6, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret=SortMinLength(arr, len);
	cout << ret << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}