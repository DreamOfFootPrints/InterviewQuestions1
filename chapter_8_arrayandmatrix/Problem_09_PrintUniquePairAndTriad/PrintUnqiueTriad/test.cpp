#include"PrrintUniqueTriad.h"


void Test1()
{
	int arr[] = { -8, -4, -3, 0, 1, 2, 4, 5, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 10;
	PrintUniueTriad(arr, len, key);
}

void Test2()
{
	int arr[] = { 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	PrintUniueTriad(arr, len, key);
}

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}