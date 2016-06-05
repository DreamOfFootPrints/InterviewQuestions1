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
	if (ei + 1 == eLen || e[ei + 1] != '*')//如果当前位置的下一个不为"*"
	{
		return (e[ei] == s[si] || e[ei] == '.') && Process(s, e, si + 1, ei + 1);
	}
	else//如果当前位置的下一个位置为"*"
	{
		if (e[ei] == s[si] || e[ei] == '.')//如果当前位置匹配的话，
		{
			while( (si< sLen) && (e[ei] == s[si] || e[ei] == '.'))
			{
				if (Process(s, e, si, ei+2))//如果后面是匹配的，则返回true
				{
					return true;
				}
				si++;
			}
			return Process(s, e, si, ei + 2);//前面的位置都是匹配的，突然到了一个位置不相等了，这个时候就看后面的情况
		}
		else//如果当前位置不匹配，则由于下一个位置为"*"，则看ei后两个的位置开始看，
		{
			return Process(s, e, si, ei+2);//这里其实不用将ei的结果改为ei>=elen,因为这里永远不会越界因为e[ei+1]的值为“*”
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
