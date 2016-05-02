#include<iostream>
#include<string>
using namespace std;





char GetKthCharAtChs(char chs[], int length, int index)
{
	if (index<1 || index>length)
	{
		return 0;
	}
	else
	{
		return chs[index - 1];
	}

}


string GetString(char chs[], int length, int num)
{
	if (chs == NULL || length <= 0)
	{
		return "";
	}
	
	int len = 0;
	int cur = 1;
	int base = length;
	while (num >= cur)
	{
		len++;
		num -= cur;
		cur *= base;
	}

	cur /= base;
	char* res = new char[len]();
	int nCur = 0;
	for (int i = 0; i < len; ++i)
	{
		nCur = num / cur;
		res[i] = GetKthCharAtChs(chs, length, nCur+1);
		num %= cur;
		cur /= base;
	}
	string sRet;
	for (int i = 0; i < len; ++i)
	{
		sRet += res[i];
	}
	return sRet;
}




int GetNumAtChs(char chs[], int length, char ch)
{
	int res = - 1;
	for (int i = 0; i < length; ++i)
	{
		if (chs[i] == ch)
		{
			res = i+ 1;//����һ��һ����ȥ�ӣ����Ը����±������
			break;
		}
	}
	return res;
}



int GetNum(char chs[], int length, string str)
{
	if (chs == NULL || length <= 0)
	{
		return 0;
	}
	int num = 0;
	const char* retArray = str.c_str();//��Ҫ����д��������ţ����Ҵ˴�дconst
	int len = str.size();
	int cur = 1;
	int base = length;
	for (int i = len - 1; i >= 0; --i)
	{
		num += GetNumAtChs(chs, length, retArray[i])*cur;
		cur *= base;
	}
	return num;
}