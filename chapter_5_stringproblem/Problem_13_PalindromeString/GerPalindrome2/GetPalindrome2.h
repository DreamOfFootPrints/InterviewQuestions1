#include<iostream>
using namespace std;
#include<string>


void Set(string& res, int resLeft, int resRight,const string& chas,int ls,int le,int rs,int re)
{
	for (int i = ls; i < le; i++)
	{
		res[resLeft++] = chas[i];
		res[resRight--] = chas[i];
	}
	
	for (int i = re; i > rs; i--)
	{
		res[resLeft++] = chas[i];
		res[resRight--] = chas[i];
	}
}


string GetPalindrome2(string str, string strlps)
{
	if (str.c_str() == NULL || str.size() == 0)
	{
		return str;
	}
	
	int len = str.size();
	int strlpsLen = strlps.size();
	string res;
	res.resize(2 * len - strlps.size());
	int chasLeft = 0;
	int chasRight = len - 1;
	int lpsLeft = 0;
	int lpsRight = strlps.size() - 1;
	int resLeft = 0;
	int resRight = res.size() - 1;
	int tmpLeft = 0;
	int tmpRight = 0;
	while (lpsLeft <= lpsRight)
	{
		tmpLeft = chasLeft;
		tmpRight = chasRight;
		while (str[chasLeft] != strlps[lpsLeft])
		{
			chasLeft++;
		}
		while (str[chasRight] != strlps[lpsRight])
		{
			chasRight--;
		}
		Set(res, resLeft, resRight, str, tmpLeft, chasLeft, chasRight, tmpRight);
		resLeft += chasLeft - tmpLeft + tmpRight - chasRight;
		resRight -= chasLeft - tmpLeft + tmpRight - chasRight;
		res[resLeft++] = str[chasLeft++];
		res[resRight--] = str[chasRight--];
		lpsLeft++;
		lpsRight--;
	}
	return res;
}