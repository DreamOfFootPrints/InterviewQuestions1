#include<iostream>
using namespace std;
#include<string>



bool IsUpper(char ch)
{
	if (ch >= 'A'&&ch <= 'Z')
		return true;
	else
		return false;
}


string PointNewChar(string str, int k)
{
	if (str.c_str() == NULL || k<0 || k>str.size())
		return "";
	int uNum = 0;
	for (int i = k - 1; i >= 0; i++)
	{
		if (!IsUpper(str[i]))
		{
			break;
		}
		uNum++;
	}
	if ((uNum & 1) == 1)
		return str.substr(k - 1, 2);
	else if (IsUpper(str[k]))
	{
		return str.substr(k, 2);
	}
	else
	{
		return str.substr(k,1);
	}

}