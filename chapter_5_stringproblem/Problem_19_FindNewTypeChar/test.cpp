#include"PointNewChar.h"


void Test1()
{
	string str = "aaABCDEcBCg";
	cout << PointNewChar(str, 7) << endl;;
	cout << PointNewChar(str, 4)<<endl;
	cout << PointNewChar(str, 10)<<endl;

}

int main()
{
	Test1();
	system("pause");
	return 0;
}