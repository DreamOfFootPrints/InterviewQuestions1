#include<iostream>
using namespace std;



bool IsUnqiuel(const char chas[])
{
	if (chas == NULL)
		return false;
	int map[256] = { 0 };
	for (int i = 0; i < strlen(chas); i++)
	{
		if (map[chas[i] - '0']++ != 0)
			return false;
	}
	return true;
}