#include<iostream>
using namespace std;
#include<string>

bool Isvalid(const string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i]<'a' || str[i]>'z')
			return false;
	}
	return true;
}


string NumToChar(int count)
{
	string res;
	while (count)
	{

		res += (count % 10+'0');
		count /= 10;
	}
	return res;
}


bool g_InalidInput = false;
string GetCountString(const string str)
{
	g_InalidInput = false;
	if (!Isvalid(str))
	{
		g_InalidInput = true;
		return str;
	}
	string res ;
	if (str.size() == 1)
	{
		res = res + str[0] + '1';
		return res;
	}
	int count = 1;
	for (int i = 1; i < str.size(); i++)
	{
		if ( str[i - 1] == str[i])
		{
			count++;
		}
		else
		{
			string tmp = NumToChar(count);
			res = res + str[i - 1] + '_' + tmp+'_' ;
			count = 1;
		}
	}
	string tmp = NumToChar(count);
	res = res + str[str.size() - 1] + '_' + tmp;
	return res;
}