#include<iostream>
using namespace std;
#include<string>
#include<deque>
#pragma warning(disable:4996)






int GetNum(deque<string>& deq)
{
	int res = 0;
	bool add = true;
	string cur ;
	int num = 0;
	while (!deq.empty())
	{
		cur = deq.front();
		deq.pop_front();
		if (cur == "+")
		{
			add = true;
		}
		else if (cur == "-")
		{
			add = false;
		}
		else
		{
			num = atoi(cur.c_str());
			res += add ? num : (-num);
		}
	}
	return res;
}

void AddNum(deque<string>& deq, int num)
{
	if (!deq.empty())
	{
		int cur = 0;
		string top = deq.back();
		deq.pop_back();
		if (top == "+" || top == "-")
		{
			deq.push_back(top);
		}
		else
		{
			if (!deq.empty())
			{
				string tmp = deq.back();
				deq.pop_back();
				cur = atoi(tmp.c_str());
				num = top == "*" ? (cur*num) : (cur / num);
			}
		}
		
	}
	string str;
	char buffer[32];
	sprintf(buffer, "%d", num);
	str.insert(0,buffer);
	deq.push_back(str);
}


int*& Value(const char str[], int i)//递归进行求解
{
	deque<string> deq;
	int pre = 0;
	int* bra = NULL;
	int len = strlen(str);
	while (i < len&&str[i] != ')')
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			pre = pre * 10 + str[i++] - '0';
		}
		else if (str[i] != '(')
		{
			AddNum(deq, pre);
			string tmp;
			tmp.push_back(str[i++]);
			deq.push_back(tmp);
			pre = 0;
		}
		else
		{
			bra = Value(str, i + 1);
			pre = bra[0];
			i = bra[1] + 1;
		}
	}
	AddNum(deq, pre);
	int* res = new int[2];
	res[0] = GetNum(deq);
	res[1] = i;
	return res;
}

int GetValue(string exp)//主函数
{
	return Value(exp.c_str(), 0)[0];
}