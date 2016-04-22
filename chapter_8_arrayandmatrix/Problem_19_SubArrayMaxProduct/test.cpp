#include"MaxProduct.h"


void Test1()
{
	double arr[] = { -2.5, 4, 0, 3, 0.5, 8, -1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = MaxProduct(arr, len);
	cout << ret << endl;
}


int main()
{
	Test1();
	system("pause");
	return 0;
}