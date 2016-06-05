#include<iostream>
using namespace std;


int Process(const char str[], int i,int len)
{
	int res = 0;
	if (i == len)
	{
		res=1;
	}
	else
	{
		if (str[i] == '0')
		{
			return 0;
		}
		else
		{
			res += Process(str, i + 1,len);
			if ((i + 1 < len) && ((str[i] - '0') * 10 + str[i + 1] - '0') < 27)
			{
				res += Process(str, i + 2, len);
			}
		}
	}
	return res;
}


int Num1(string str)
{
	if (str.c_str() == NULL)
		return 0;
	return Process(str.c_str(), 0, str.size());
}