#include<iostream>
#include<string>
using namespace std;


bool IsRotation(string str1, string str2)
{
	if (str1 == "" || str2 == "" || str1.length() != str2.length())
	{
		return false;
	}
	string lineOfstr2 = str2 + str2;
	return lineOfstr2.find(str1, 0) != -1;
}