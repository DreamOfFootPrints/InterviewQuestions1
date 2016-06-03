#include"IsContains.h"


void Test1()
{
	int arr[] = { 4, 5, 6, 7, 8, 1, 2, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	cin >> key;
	cout << IsContains(arr, len,key) << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}