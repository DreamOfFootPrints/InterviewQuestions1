#include"GetValue.h"

void Test1()
{
	string  str = "3+1*4";
	/*cout << GetValue(str)<<endl;
	str = "3+(1*4)";
	cout << GetValue(str)<<endl;*/
	str = "48*((70-65)-43)+8*1";
	cout << GetValue(str) << endl;

}


int main()
{
	Test1();
	system("pause");
	return 0;
}