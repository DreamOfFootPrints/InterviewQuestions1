#include<iostream>
using namespace std;


bool IsDeformation(char str1[], char str2[])
{
	if (str1 == NULL || str2 == NULL)
		return false;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return false;
	int map[256] = { 0 };
	for (int i = 0; i < len1; ++i)
	{
		map[str1[i]]++;
	}
	for (int i = 0; i < len2; ++i)
	{
		if (map[str2[i]]-- == 0)
		{
			return false;
		}
	}
	return true;
}