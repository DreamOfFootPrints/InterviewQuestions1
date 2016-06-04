#include<iostream>
using namespace std;


double CrossProduct(double x1, double y1, double x2, double y2)
{
	return x1*y2 - x2*y1;
}

int IsInside(double x1, double y1, double x2, double y2, double x3, double y3,double x,double y)
{
	//如果三角形的点不是逆时针输入，改变一下顺序
	if (CrossProduct(x3 - x1, y3 - y1, x2 - x1, y2 - y1) >= 0)
	{
		double tmpX = x2;
		double tmpY = y2;
		x2 = x3;
		y2 = y3;
		x3 = tmpX;
		y3 = tmpY;
	}
	if (CrossProduct(x2 - x1, y2 - y1, x - x1, y - y1) < 0)
	{
		return false;
	}
	if (CrossProduct(x3 - x2, y3 - y2, x - x2, y - y2) < 0)
	{
		return false;
	}
	if (CrossProduct(x1 - x3, y1 - y3, x - x3, y - y3) < 0)
	{
		return false;
	}
	return true;
}


