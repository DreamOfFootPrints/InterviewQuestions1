#include<iostream>
using namespace std;



void Replace(char chas[],int length)
{
	if (chas == NULL)
		return;
	int numOfBlank = 0;
	int numOfOrginal = 0;
	int index = 0;
	while (index < length&&chas[index] != '\0')
	{
		numOfOrginal++;
		if (chas[index] == ' ')
			numOfBlank++;
		index++;
	}
	int indexOfNew = numOfOrginal + 2 * numOfBlank - 1;
	int indexOfOriginal = numOfOrginal - 1;
	while (indexOfOriginal < indexOfNew)
	{
		if (chas[indexOfOriginal] == ' ')
		{
			chas[indexOfNew--] = '0';
			chas[indexOfNew--] = '2';
			chas[indexOfNew--] = '%';
		}
		else
		{
			chas[indexOfNew--] = chas[indexOfOriginal];
		}
		indexOfOriginal--;
	}
}