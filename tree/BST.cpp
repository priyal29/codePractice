#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* getNode(int data)
{
	node* cur = new node();
	cur->data = data;
	cur->left = NULL;
	cur->right = NULL;
	return cur; 
}

node* insert(node* root, int data)
{
	if(root == NULL){
		root = getNode(data);
	} else if(data <= root->data) {
		root->left = insert(root->left, data);
	} else {
		root->right = insert(root->right, data);
	}
	return root;	
}

void inorder(node* root)
{
	if(root != NULL){
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

bool search(node* root, int data)
{
	if(root == NULL) return false;

	if(data == root->data) 
		return true;
	else if(data <= root->data)
		return search(root->left, data);
	else
		return search(root->right,data);
}

node* findMin(node* root)
{
	if(root == NULL) return root;
/*
	if(root->left == NULL) 
		return root->data;
	else
		findMin(root->left);
*/
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}

int findMax(node* root)
{
	if(root == NULL) return -1;

	while(root->right != NULL){
		root = root->right;
	}
	return root->data;
}

node* remove(node* root, int data)
{
	if(root == NULL) return root;
	else if(data < root->data) root->left = remove(root->left, data);
	else if(data > root->data) root->right = remove(root->right, data);
	else{
		//case1: if no child
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		//case2 : one child (either left/ right)
		else if(root->left == NULL) {
			node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			node* temp = root;
			root = root->left;
			delete temp;
		}
		//case3: two child (copy min child in RST/ max child on LST to root, and then problem would become same as case2
		else{
			node* temp = findMin(root->right);
			root->data = temp->data;
			root->right = remove(root->right, temp->data);
		}
	}
	return root;
}

int main()
{
	node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 25);
	root = insert(root, 8);
	root = insert(root, 12);
	inorder(root);
	cout << endl;
	int num;
	cout << "enter element to remove : " << endl;
	cin >> num;
	remove(root, num);
	inorder(root);
	cout << endl;
	cout << "enter a number to be searched : " << endl;
	cin >> num;
	if(search(root,num) == true) 
		cout << "found" << endl;
	else 
		cout << "not found" << endl;

/*	int min = findMin(root);
	cout << "min in BST is = " << min << endl;
	int max = findMax(root);
	cout << "max in BST is = " << max << endl;*/
	return 0;
}
