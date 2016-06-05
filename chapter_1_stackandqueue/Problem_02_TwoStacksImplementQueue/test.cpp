#include"TwoStackQueue.h"

void Test1()
{
	TwoStackQueue<int> t;
	t.Push(1);
	t.Push(2);
	t.Push(3);
	t.Push(4);
	t.Push(5);
	t.Push(6);
	t.Push(7);
	t.Push(8);
	t.Push(9);

	while (!t.Empty())
	{
		cout << t.Top() << endl;
		t.Pop();
	}

}


int main()
{
	Test1();
	system("pause");
	return 0;
}