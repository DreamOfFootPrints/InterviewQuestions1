#include"LongestContinuous.h"


void Test1()
{
	int arr[] = { 100, 4, 200, 1, 3, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << longestContinuous(arr, len);
}

int main()
{
	Test1();
	system("pause");
	return 0;
}