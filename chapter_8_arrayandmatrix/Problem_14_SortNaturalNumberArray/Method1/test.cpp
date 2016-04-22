#include"NaturalSort.h"


void Test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	NaturalSort(arr, len);
	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
}

int main()
{
	Test1();
	system("pause");
	return 0;
}