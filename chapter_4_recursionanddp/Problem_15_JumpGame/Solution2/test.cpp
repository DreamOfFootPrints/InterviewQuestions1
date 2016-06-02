#include"Jump.h"



void Test1()
{
	int arr[] = { 3, 2, 3, 1, 1, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << Jump(arr, len) << endl;
}

int main()
{
	Test1();
	system("pause");
	return 0;
}