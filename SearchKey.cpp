// Write the algorithm on how the search key implementation works.
#include <iostream>
using namespace std;

struct str //declare of node for binary search tree
{
	int data; 
	str *left, *right;
	
};

//this function to create new node heap
str* newnode(int data)
{	
	str* node = new str();
	node->data = data;
	node->left = node->right = NULL;
	return node;
}



//Insert data in tree it will return address in root node
str* insert (str* root, int data)
{
	if(root == NULL)
	{
		root = newnode(data);
	}
	else if (data <= root->data) // if the data be inserted less than root
	{
		root->left = insert(root->left,data);
	}
	else //insert the right tree
	{
		root->right = insert(root->right,data);
	}
	return root;
}
bool search(str*root, int data) //to search element in binary search tree and it will be return true if element found
{
	if (root == NULL)
	{
		return false;
	}
	else if(root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return search(root->left,data);
	}
	else
	{
		return search(root->right, data);
	}
}

int main()
{

	int ext;

	str* root = NULL; //create empty tree

		//insert data in the tree	
		root = insert(root, 10);
		root = insert(root, 20);
		root = insert(root, 30);
		root = insert(root, 40);
		root = insert(root, 50);
		root = insert(root, 60);
		root = insert(root, 70);
		root = insert(root, 80);
		root = insert(root, 90);
		root = insert(root, 100);
		
		
	while(ext != 2)
	{
		system("cls");
		int n;
		
		cout << "Enter number to be searched: ";
		cin >> n;
		
		if(search(root,n)== true)
		{
			cout << "RECORD FOUND" <<endl;
		}
		else
		{
			cout << "RECORD NOT FOUND" <<endl;	
		}
		
		
		cout << "Choice 1 - 2 " <<endl;
		cout <<"Press '1' to reset number " <<endl;
		cout << "Press '2' to exit program " <<endl;
		cin >> ext;
	}
	return 0;	
}
