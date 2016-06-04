#include<iostream>
using namespace std;


bool IsValid(const string& exp)
{
	if ((exp.size() & 1) == 0)
		return false;
	for (int i = 0; i < exp.size(); i += 2)
	{
		if ((exp[i] != '1') && (exp[i] != '0'))
		{
			return false;
		}
	}
	for (int i = 1; i < exp.size(); i += 2)
	{
		if ((exp[i] != '&') && (exp[i] != '|') && (exp[i] != '^'))
		{
			return false;
		}
	}
	return true;
}

int Process(const string exp, bool desired, int left, int right)
{
	int res = 0;
	if (left == right)
	{
		if (exp[left] == '1')
		{
			res= desired ? 1 : 0;
		}
		else
		{
			res = desired ? 0 : 1;
		}
	}
	else
	{
		if (desired)
		{
			for (int i = left + 1; i < right; i+=2)
			{
				switch (exp[i])
				{
				case '&':
					res += Process(exp, true, left, i - 1)*Process(exp, true, i + 1, right);
					break;
				case '|':
					res += Process(exp, true, left, i - 1)*Process(exp, false, i + 1, right);
					res += Process(exp, false, left, i - 1)*Process(exp, true, i + 1, right);
					res += Process(exp, true, left, i - 1)*Process(exp, true, i + 1, right);
					break;
				case '^':
					res += Process(exp, true, left, i - 1)*Process(exp, false, i + 1, right);
					res += Process(exp, false, left, i - 1)*Process(exp, true, i + 1, right);
					break;
				}
			}
		}
		else
		{
			for (int i = left + 1; i < right; i+=2)
			{
				switch (exp[i])
				{
				case '&':
					res += Process(exp, false, left, i - 1)*Process(exp, true, i + 1, right);
					res += Process(exp, true, left, i - 1)*Process(exp, false, i + 1, right);
					res += Process(exp, false, left, i - 1)*Process(exp, false, i + 1, right);
					break;
				case '|':
					res += Process(exp, false, left, i - 1)*Process(exp, false, i + 1, right);
					break;
				case '^':
					res += Process(exp, true, left, i - 1)*Process(exp, true, i + 1, right);
					res += Process(exp, false, left, i - 1)*Process(exp, false, i + 1, right);
					break;
				}
			}
		}
	}
	return res;
}


int Num1(string express, bool desired)
{
	if (express.c_str() == NULL)
	{
		return 0;
	}
	if (!IsValid(express))
	{
		return 0;
	}
	return Process(express, desired, 0, express.size() - 1);



}