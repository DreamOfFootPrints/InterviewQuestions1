#include<iostream>
#include<string>
using namespace std;


void Clear(string& str, int nowIndex, int match, string to)
{ 
	str.erase(nowIndex - match+1, match);
	str.insert(nowIndex - match+1, to);
}

string Replace(string str,string from,string to)
{
	if (str == "" || from == "" || to == "")
		return	str;
	int match =from.length();
	int index = 0;
	for (int i = 0; i < str.length(); ++i)//����ֱ��ɾ����ԭ��ɾ���Ļ�����ͱ���,i������ҲҪ�ı�
	{
		if (str[i] == from[index])
		{
			index++;
			if (--match == 0)
			{
				Clear(str, i,from.length(), to);
				i = i - from.length() + to.length();//i������ҲҪ�ı�
				match = from.length();
				index = 0;
			}
		}
		else
		{
			match = from.length();
			index = 0;
		}
	}
	return str;
}


