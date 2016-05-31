#include<iostream>
using namespace std;

int StringToNum(const string& str, int  index)
{
	int num = 0;
	while (index < str.size())
	{
		if (str[index] >= '0'&&str[index] <= '9')
		{
			num = num * 10 + str[index] - '0';
			index++;
		}
		else
			break;
	}
	return num;
}




bool g_InvalidInput = false;
char GetCharAt(string cstr, int index)
{
	g_InvalidInput = false;
	if (cstr.size() == 0 || index < 0)
		return NULL;
	int num = 0;
	for (int i = 2; i < cstr.size(); i+=4)
	{
		if (cstr[i]<'0' || cstr[i]>'9')
		{
			g_InvalidInput = true;
			return NULL;
		}
		else
		{
			int cur = StringToNum(cstr, i);
			num += cur;
			if (num >= index)
			{
				return cstr[i - 2];
			}
			int count = 0;
			while (cur)
			{
				count++;
				cur /= 10;
			}
			i += count - 1;
		}
	}
	return NULL;
}