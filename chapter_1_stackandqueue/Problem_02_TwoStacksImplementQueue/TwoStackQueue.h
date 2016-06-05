#include<iostream>
using namespace std;
#include<stack>
#include<assert.h>


template<class T>
class TwoStackQueue
{
public:
	void Push(int x)
	{
		stackPush.push(x);
	}
	void Pop()
	{
		assert(!stackPush.empty() || !stackPop.empty());
		if (!stackPop.empty())
		{
			stackPop.pop();
		}
		else
		{
			while (!stackPush.empty())
			{
				stackPop.push(stackPush.top());
				stackPush.pop();
			}
			stackPop.pop();
		}
	}
	T& Top()
	{
		assert(!stackPush.empty() || !stackPop.empty());
		if (stackPop.empty())
		{
			while (!stackPush.empty())
			{
				stackPop.push(stackPush.top());
				stackPush.pop();
			}
		}
		return stackPop.top();
	}

	bool Empty()
	{
		return stackPush.empty() && stackPop.empty();
	}

protected:
	stack<T> stackPush;
	stack<T> stackPop;
};