#include"GetIndex.h"


void Test1()
{//���Բ��ɹ�����д�գ����磺strs[6]={ NULL, "a", NULL, "b", NULL, "c"}
	string strs[6] = { "a", "a", "a", "b", "a", "c" };
	string str = "a";
	cout << GetIndex(strs, 6, str);
}

int main()
{
	Test1();
	system("pause");
	return 0;
}