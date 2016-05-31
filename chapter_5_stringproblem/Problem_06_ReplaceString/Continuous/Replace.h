#include<iostream>
using namespace std;
#include<string>

void Clear(string& str, int left, int right)
{
	for (int i = left; i <= right; i++)
	{
		str[i] = '\0';
	}
}


void SetTo(string& str, const string& to)
{
	string res;
	for (int i = 0; i < str.size();)
	{
		if (str[i] != '\0')
		{
			res += str[i];
			i++;
		}
		else
		{
			while (i < str.size()&&str[i]=='\0')
			{
				i++;
			}
			res+=to;
		}
	}
	str.swap(res);
}


string& Replace(string& str, string from, string to)
{
	if (str.size() == 0 || from.size() == 0 || to.size() == 0)
	{
		return str;
	}
	int index = 0;
	int match = from.size();
	for (int i = 0; i < str.size(); i++)
	{
		if (index == match-1)
		{
			Clear(str, i - match + 1, i); 
		}
		else
		{
			if (str[i] == from[index])
			{
				match;
				index++;
			}
			else
			{
				index = 0;
			}
		}
	}
	if (index == match)
	{
		Clear(str, str.size() - match + 1, str.size());
	}
	SetTo(str, to);
	return str;
}

