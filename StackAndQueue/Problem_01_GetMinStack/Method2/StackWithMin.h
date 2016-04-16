#include<iostream>
#include<stack>
#include<assert.h>
using namespace std;


template<class T>//ģ��ûдһ��������Ҫȥ����һ��
class StackWithMin
{
public:
	StackWithMin(){};//�����Զ�ȥ����Ӧ�Ĺ��캯������������
	virtual ~StackWithMin(){};
	void Push(const T& x);
	void Pop();
	const T& Min()const;//����ջ�ռ�ı��������Կ���ֱ�Ӽ����÷��أ����ǲ��ܸı����ֵ�����Լ�const
	T& Top();
	bool Empty() const;
	size_t Size()const;
private:
	stack<T>  StackData;//����ջ�����ջ������Ԫ��     //ʹ����ģ����Ҫģ������б�,û����������ģ�����
	stack<T>  StackMin;//����ջ�����ջ�е���СԪ��
};

template<class T>
void StackWithMin<T>::Push(const T& x)
{
	StackData.push(x);
	if (StackMin.size() == 0 || x < StackMin.top())
		StackMin.push(x);
	else
		StackMin.push(StackMin.top());
}

template<class T>
void StackWithMin<T>::Pop()
{
	assert(StackData.size() > 0 && StackMin.size() > 0);//ϵͳ��stack��֪����������ʵ�ֵĻ���������ʵ�ֵģ�
														//������ôд����֪���Ǻ�0�Ƚϻ��Ǻ�NULL�Ƚ�
	StackData.pop();
	StackMin.pop();
}


template<class T>
const T& StackWithMin<T>::Min()const
{
	assert(StackData.size() > 0 && StackMin.size() > 0);

	return StackMin.top();
}

template<class T>
T& StackWithMin<T>::Top()
{
	return StackData.top();
}

template<class T>
bool StackWithMin<T>::Empty()const
{
	return StackData.size() == 0;
}





