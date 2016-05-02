#include<iostream>
using namespace std;


bool IsPalindrome(int num)
{
	if (num == (int)0x80000000)
	{
		return false;
	}
	num = num < 0 ? -num : num;
	int help = 1;
	if (num >= help)
	{
		help *= 10;
	}
	while (num)
	{
		if (num % 10 != num / help)//注意这里是false
		{
			return false;
		}
		num = (num%help) / 10;
	}
	return true;
}