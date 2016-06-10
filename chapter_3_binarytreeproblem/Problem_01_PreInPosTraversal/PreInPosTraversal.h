#include<iostream>
using namespace std;
#include<stack>


template <class T>
struct BinaryTreeNode
{
public:
	T _data;
	BinaryTreeNode<T>* _left;
	BinaryTreeNode<T>* _right;
public:
	BinaryTreeNode(const T& x= T())
		:_left(NULL)
		, _right(NULL)
		,_data(x)
	{}
};

template<class T>
class BinaryTree
{
	typedef BinaryTreeNode<T> Node;
public:
	BinaryTree()
		:_root(NULL)
	{}
	BinaryTree(const T* a, size_t size, const T& invalide)
	{
		size_t index = 0;
		_root = _GreatTree(a, index, size,invalide);
	}
	//递归遍历
	//1、前序
	void PreOrder_R()
	{
		_PreOrder(_root);
		cout << endl;
	}
	//2、中序
	void InOrder_R()
	{
		_Inorder(_root);
		cout << endl;
	}
	//3、后序
	void PosOrder_R()
	{
		_PosOrder(_root);
		cout << endl;
	}

	//非递归遍历
	void PreOrder_NonR()
	{
		if (_root == NULL)
			return;
		Node* cur = _root;
		stack<Node*> s;
		s.push(cur);
		while (!s.empty())
		{
			Node* top = s.top();
			s.pop();
			cout << top->_data << " ";
			if (top->_right != NULL)
			{
				s.push(top->_right);
			}
			if (top->_left != NULL)
			{
				s.push(top->_left);
			}
		}
		cout << endl;
	}

	void InOrder_NonR()
	{
		if (_root == NULL)
			return;
		Node* cur = _root;
		stack<Node*> s;
		while (cur || !s.empty())
		{
			while (cur)
			{
				s.push(cur);
				cur = cur->_left;
			}
			Node* top = s.top();
			s.pop();
			cout << top->_data << " ";
			if (top->_right != NULL)
			{
				cur = top->_right;
			}
		}
		cout << endl;
	}

	void PosOrder_NonR()
	{
		if (_root == NULL)
			return;
		Node* cur = _root;
		Node* pre = cur;
		stack<Node*> s;
		while (cur || !s.empty())
		{
			while (cur)
			{
				s.push(cur);
				cur = cur->_left;
			}
			Node* top = s.top();
			if (top->_right == NULL || top->_right == pre)
			{
				cout << top->_data << " ";
				s.pop();
				pre = top;
			}
			else
			{
				cur = top->_right;

			}
		}
		cout << endl;
	}



private:
	Node* _GreatTree(const T* a, size_t& index, size_t size,const T& invalid)//前序建立节点
	{
		Node* root = NULL;
		if (index < size&&a[index] != invalid)
		{
			root = new Node(a[index]);
			root->_left = _GreatTree(a, ++index,size, invalid);
			root->_right = _GreatTree(a, ++index,size, invalid);
		}
		return root;
	}
	//递归函数
	void _PreOrder(Node* root)
	{
		if (root == NULL)
			return;
		cout << root->_data << " ";
		_PreOrder(root->_left);
		_PreOrder(root->_right);
	}



	void _Inorder(Node* root)
	{
		if (root == NULL)
			return;
		_Inorder(root->_left);
		cout << root->_data << " ";
		_Inorder(root->_right);
	}

	void _PosOrder(Node* root)
	{
		if (root == NULL)
			return;
		_PosOrder(root->_left);
		_PosOrder(root->_right);
		cout << root->_data << " ";
	}




private:
	Node* _root;
};