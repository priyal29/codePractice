#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;

	Node(int data_i)
	{
		this->data = data_i;
		left = right = NULL;
	}
};

void inorder(Node* root)
{
	stack<Node *> st;	
	Node* curr = root;
	
	while(curr != NULL && !st.empty()){
		while(curr != NULL){
			st.push(curr);
			curr = curr->left;
		}
	}
	curr = st.top();
	st.pop();
	cout << curr->data << " ";
	curr = curr->right;
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	inorder(root);
	return 0;
}
