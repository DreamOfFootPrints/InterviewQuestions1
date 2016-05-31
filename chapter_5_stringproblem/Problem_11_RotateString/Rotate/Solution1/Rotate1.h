#include<iostream>
using namespace std;

void Reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


void Rotate1(char chs[], int size)
{
	if (chs == NULL&&size <= 0)
		return;
	int len = strlen(chs);
	if (size > len)
		return;
	Reverse(&chs[0], &chs[size - 1]);
	Reverse(&chs[size], &chs[len-1]);
	Reverse(&chs[0], &chs[len - 1]);
}