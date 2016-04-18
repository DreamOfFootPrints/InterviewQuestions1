#include"GetLIL.h"

void Test1()
{
	//int arr[] = { 5, 5, 3, 2, 6, 4, 3 };
	int arr[] = { 2, 3, 4, 5, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret =GetLIL1(arr, len);
	cout << ret<<endl;
}

void Test2()
{
	int arr[] = { 1, 3, 5, 6, 2, 4, 6, 8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (int i = 0; i < len; ++i)
		cout << arr[i] << endl;
}

int main()
{
	Test1();
	//Test2();
	system("pause");
	return 0;
}