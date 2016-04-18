#include"PrintUniquePair.h"


void Test1()
{
	int arr[] = { 1,  2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintUnqiuePair(arr, len,5);
}

int  main()
{
	Test1();
	system("pause");
	return 0;
}