#include<iostream>
using namespace std;


bool IsValid(const char s[],const char e[])
{
	int strLen = strlen(s);
	int eLen = strlen(e);
	for (int i = 0; i < strLen; i++)
	{
		if (s[i] == '*' || s[i] == '.')
		{
			return false;
		}
	}
	for (int i = 0; i < eLen; i++)
	{
		if (e[i] == '*' && (i == 0 || e[i - 1] == '*'))
		{
			return false;
		}
	}
	return true;
}


bool Process(const char s[], const char e[], int si, int ei)
{
	int sLen = strlen(s);
	int eLen = strlen(e);
	
	if (ei == eLen)
	{
		return si == sLen;
	}
	if (si == sLen)
	{
		return false;
	}
	if (ei + 1 == eLen || e[ei + 1] != '*')//�����ǰλ�õ���һ����Ϊ"*"
	{
		return (e[ei] == s[si] || e[ei] == '.') && Process(s, e, si + 1, ei + 1);
	}
	else//�����ǰλ�õ���һ��λ��Ϊ"*"
	{
		if (e[ei] == s[si] || e[ei] == '.')//�����ǰλ��ƥ��Ļ���
		{
			while( (si< sLen) && (e[ei] == s[si] || e[ei] == '.'))
			{
				if (Process(s, e, si, ei+2))//���������ƥ��ģ��򷵻�true
				{
					return true;
				}
				si++;
			}
			return Process(s, e, si, ei + 2);//ǰ���λ�ö���ƥ��ģ�ͻȻ����һ��λ�ò�����ˣ����ʱ��Ϳ���������
		}
		else//�����ǰλ�ò�ƥ�䣬��������һ��λ��Ϊ"*"����ei��������λ�ÿ�ʼ����
		{
			return Process(s, e, si, ei+2);//������ʵ���ý�ei�Ľ����Ϊei>=elen,��Ϊ������Զ����Խ����Ϊe[ei+1]��ֵΪ��*��
		}
	}
}


bool IsMatch(string str, string exp)
{
	if (str.c_str() == NULL || exp.c_str() == NULL)
	{
		return false;
	}
	return IsValid(str.c_str(), exp.c_str()) ? Process(str.c_str(), exp.c_str(), 0, 0) : false;
}
