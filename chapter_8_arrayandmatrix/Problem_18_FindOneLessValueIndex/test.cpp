#include"GetLessIndex.h"


void Test1()
{
	int arr[] = { 3, 2, 1, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = GeteLessIndex(arr, len);
	cout << ret << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}