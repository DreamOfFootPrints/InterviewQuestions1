#include<iostream>
using namespace std;

//

int Min(int a, int b)
{
	return a < b ? a : b;
}



int MinDistance(string strs[],int len, string str1, string str2)
{
	if (str1.size() == 0 || str2.size() == 0)
	{
		return -1;
	}
	if (str1 == str2)
	{
		return 0;
	}
	int last1 = -1;
	int last2 = -1;
	int min = (int)0x7FFFFFFF;
	for (int i = 0; i < len; i++)
	{
		if (strs[i]==str1)
		{
			last1 = i;
			if (last2 != -1)
				min = Min(min, last1 - last2 );
		}
		if (strs[i]==str2)
		{
			last2 = i;
			if (last1 != -1)
				min = Min(min, last2 - last1 );
		}
	}
	return min == (int)0x7FFFFFFF ? -1 : min;
}