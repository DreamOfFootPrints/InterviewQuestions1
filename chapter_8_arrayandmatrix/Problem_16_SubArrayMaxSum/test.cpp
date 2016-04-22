#include"MaxSum.h"


void Test1()
{
	int arr[] = { 1, -2,3,5, - 2, 6, -1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = MaxSum(arr, len);
	cout << ret << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}