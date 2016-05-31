#include<iostream>
using namespace std;

//自己原创，使用i-1的值自然做有边界


void Reverse(char* left,char* right)
{
	while (left <= right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void RotateWord(char chas[])
{
	if (chas == NULL || strlen(chas) == 1)
	{
		return;
	}
	int len = strlen(chas);
	Reverse(&chas[0], &chas[len - 1]);

	int start = -1;
	for (int i = 0; i < len; i++)
	{
		if (chas[i] == ' ')
		{
			if (i > 0 && chas[i - 1] != ' ')
			{
				if (start != -1)
				{
					Reverse(&chas[start], &chas[i - 1]);
					start = -1;
				}
			}
			start = -1;
		}
		else
		{
			start = start == -1 ? i : start;
		}
	}
	if (start != -1)
	{
		Reverse(&chas[start], &chas[len-1]);
	}
}