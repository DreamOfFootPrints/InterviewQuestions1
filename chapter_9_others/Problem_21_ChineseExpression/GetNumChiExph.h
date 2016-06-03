#include<iostream>
#include<string>
using namespace std;



string Num1To9(int num)
{
	string ChineseOfNum[] = { "һ", "��", "��", "��", "��", "��", "��", "��", "��" };
	return ChineseOfNum[num - 1];
}


string Num1To99(int num,bool hasbai=false)
{
	if (num <= 9)
	{
		return Num1To9(num);
	}
	else
	{
		bool haveBai = false;
		string res;
		int shi = num / 10;
		if ((shi == 1)&&(!hasbai))
		{
			res = "ʮ" + Num1To9(num % 10);
		}
		else
		{
			res = Num1To9(num / 10) + "ʮ" + Num1To9(num % 10);
		}
		return res;
	}
}



string Num1To999(int num )
{
	if (num <= 99)
	{
		return Num1To99(num);
	}
	else
	{
		string res;
		int bai = num / 100;
		res = Num1To9(bai) + "��";
		if (num % 100!=0)
		{
			if (num % 100 > 9)
			{
				res += Num1To99(num%100,true);//��ʹ���������Ҳ������һ�δ���
			}
			else
			{
				res = res+"��";
				res =res+ Num1To9(num % 100);//��������
			}
		}
		return res;
	}
}


string Num1To9999(int num)
{
	if (num <= 999)
	{
		return Num1To999(num);
	}
	else
	{
		string res;
		int qian = num / 1000;
		res = Num1To9(qian) ;
		res += "ǧ";
		if (num % 1000 != 0)
		{
			res += Num1To999(num % 1000);
		}
		return res;
	}
}



string Num1To99999999(int num)
{
	if (num <= 9999)
	{
		return Num1To9999(num);
	}
	else
	{
		string res;
		int wan = num / 10000;
		res = Num1To9999(wan);
		res += "��";

		if (num % 10000 != 0)
		{
			res += Num1To9999(num % 10000);
		}
		return res;
	}
}


int Abs(int num)
{
	return num < 0 ? -num : num;
}

string GetNumChiExph(int num)//���ڸ�����˵��λ���ֿ�����Ҫ��Ȼ��������
{
	if (num == 0)
	{
		return "��";
	}
	string res;
	if (num < 0)
	{
		res += "��";
	}
	int yi = Abs(num / 100000000);
	int surplus = Abs(num % 10000000);
	if (yi == 0)
	{
		return Num1To99999999(surplus);
	}
	else
	{
		res = res + Num1To99999999(yi) + "��";
		if (surplus != 0)
		{
			res += Num1To99999999(surplus);
		}
	}
	return res;
}