#include<iostream>
using namespace std;


int Gcd(int m, int n)
{
	return n == 0 ? m : Gcd(n, m%n);
}