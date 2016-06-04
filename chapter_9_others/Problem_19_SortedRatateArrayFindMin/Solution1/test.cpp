#include"GetMin.h"



void Test1()
{
	int arr[] = { 4, 5, 6, 7, 1, 2, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << GetMin(arr, len) << endl;
}


void Test2()
{

}

int main()
{
	Test1();
	Test2();
	system("pause");
	return 0;
}