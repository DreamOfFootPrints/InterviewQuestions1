#include"Modify.h"


void Test1()
{
	int arr[] = { 2, 4, 6, 8, 0, 1, 3, 5, 7, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Modify(arr, len);
	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}