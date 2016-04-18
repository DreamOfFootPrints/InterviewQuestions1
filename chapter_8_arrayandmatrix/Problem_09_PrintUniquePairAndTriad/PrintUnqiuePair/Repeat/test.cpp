#include"PrintUniquePair.h"


void Test1()
{
	int arr[] = { -8, -4, -3, 0, 1, 2, 4, 5, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintUnqiuePair(arr, len,10);
}

int main()
{
	Test1();
	system("pause");
	return 0;
}