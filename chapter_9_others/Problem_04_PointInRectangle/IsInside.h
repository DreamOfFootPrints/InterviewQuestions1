#include<iostream>
using namespace std;
#include<math.h>
int Abs(int a)
{
	return a < 0 ? -a : a;
}


bool _IsInside(double x1,double y1,double x4,double y4,double x,double y)//最左边和最右边的点
{
	if (x <= x1)
	{
		return false;
	}
	if (x >= x4)
	{
		return false;
	}
	if (y >= y1)
	{
		return false;
	}
	if (y <= y4)
	{
		return false;
	}
	return true;
}


bool IsInside(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4,double x,double y)
{
	if (y1 == y2)//最左边和最上边的点
	{
		return _IsInside(x1, y1, x4, y4, x, y);
	}
	double l = Abs(y4 - y3);
	double k = Abs(x4 - y4);
	double s = sqrt(k*k + l*l);
	double sin = l / s;
	double cos = k / s;
	double x1R = cos*x1 + sin*y1;
	double y1R = -x1*sin + y1*cos;
	double x4R = cos*x4 + sin*y4;
	double y4R = -x4*sin + y4*cos;
	double xR = cos*x + sin*y;
	double yR = -x*sin + y*cos;
	return _IsInside(x1R, y1R, x4R, y4R, xR, yR);
}