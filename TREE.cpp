//Write the algorithm on how the number 40 being inserted to the right tree shown below.
#include <iostream>
using namespace std;

class str
{
	int data; 
	str *left, *right;
	
	public:
		//Default constructor
		str();
		
		//Parameterized constructor`
		str(int);
		
		//Insert function
		str* mtr(str*, int);
		
		//inorder traversal
		void idr(str*);
};

//Default constructor definition
str ::str()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

//Parameterized Constructor definition
str ::str(int value)
{
	data = value;
	left = right = NULL;
}

//Insert function definition
str* str ::mtr(str* root, int value)
{
	if(!root)
	{
		return new str(value); //insert first node if root is NULL
	}
	
	//insert data
	if (value > root->data)
	{
		root->right = mtr(root->right, value); // insert first mode if root is NULL
	}
	else
	{
		// insert first mode if root is NULL
		// inserted is greater than root node data
		
		//process left node
		root->left = mtr(root->left, value);
	}
	return root; //return root node after the insertion
}

//inorder traversal function
//Gives data in sorted order
void str ::idr(str* root)
{
	if (!root)
	{
		return;
	}
	idr(root->left);
		cout << root->data <<endl;
	idr(root->right);
}

int main()
{
	str b, *root = NULL;
	root = b.mtr(root, 50);
	
		b.mtr(root, 20);
		b.mtr(root, 30);
		b.mtr(root, 40);
		b.mtr(root, 60);
		b.mtr(root, 70);
		b.mtr(root, 80);
	
	b.idr(root);
	return 0;	
}


