#include<iostream>
using namespace std;
#include<string>


bool IsValid(string str)
{
	if (str.c_str() == NULL)
	{
		return false;
	}
	int status = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (status < 0)
		{
			return false;
		}
		switch (str[i])
		{
		case '(':
			status++;
			break;
		case ')':
			status--;
			break;
		default:
			return false;
		}
	}
	return status == 0;
}