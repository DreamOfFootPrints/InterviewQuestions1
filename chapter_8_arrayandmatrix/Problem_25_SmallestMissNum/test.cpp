#include"MissNum.h"


void Test1()
{
	//int arr[] = { -1, 2, 3, 4 };
	//int arr[] = { 1, 2, 3, 4 };
	int arr[] = { 1, 5, 3, 7, 8, 2, 3, 4, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = MissNum(arr, len);
	cout << ret << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}