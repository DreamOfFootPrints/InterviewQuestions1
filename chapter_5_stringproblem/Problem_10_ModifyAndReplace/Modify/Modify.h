#include<iostream>
using namespace std;


void Modify(char chas[],int length)
{
	if (chas == NULL || length <= 0)
		return;
	int index = length - 1;
	for (int i = length - 1; i >= 0; i--)
	{
		if (chas[i] >= '0'&&chas[i] <= '9')
			chas[index--] = chas[i];
	}
	for (int i = 0; i <= index; i++)
		chas[i] = '*';
}