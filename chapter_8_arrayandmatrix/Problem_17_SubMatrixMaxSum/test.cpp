#include"MaxSum.h"


void Test1()
{
	int rows = 3;
	int cols = 3;
	int** matrix = GetMatirx(rows, cols);
	matrix[0][0] = -90;
	matrix[0][1] = 48;
	matrix[0][2] = 78;
	matrix[1][0] = 64;
	matrix[0][1] = -40;
	matrix[0][2] = 64;
	matrix[2][0] = -81;
	matrix[2][1] = -7;
	matrix[2][2] = 66;
	int ret = MaxSum(matrix, rows, cols);
	cout << ret << endl;

}

void Test2()
{
	int rows = 3;
	int cols = 3;
	int** matrix = GetMatirx(rows, cols);
	matrix[0][0] = -1;
	matrix[0][1] = -1;
	matrix[0][2] = -1;
	matrix[1][0] = -1;
	matrix[0][1] = 2;
	matrix[0][2] = 2;
	matrix[2][0] = -1;
	matrix[2][1] = -1;
	matrix[2][2] = -1;
	int ret = MaxSum(matrix, rows, cols);
	cout << ret << endl;

}

int main()
{
	Test1();
	//Test2();
	system("pause");
	return 0;
}