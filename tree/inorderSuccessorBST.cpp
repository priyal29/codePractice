#include<iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* getNode(int data)
{
	node* cur = new node();
	cur->data = data;
	cur->left = cur->right = NULL;
}

node* insert(node* root, int data)
{
	if(root == NULL) root = getNode(data);
	else if(data <= root->data) root->left = insert(root->left, data);
	else if(data > root->data) root->right = insert(root->right, data);
	return root;
}

void inorder(node* root)
{
	if(root == NULL) return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

node* find(node* root, int data)
{
	if(root == NULL) return NULL;
	else if(data == root->data) return root;
	else if(data < root->data) return find(root->left, data);
	else if(data > root->data) return find(root->right, data);
}

node* getInorderSuccessor(node* root, int data)
{
	node* current = find(root, data);
	if(current == NULL) return NULL;
	if(current->right != NULL){
		//case1: find min elemnt in RST
		node* temp = current->right;
		while(temp->left != NULL){
			temp = temp->left;
		}
		return temp;
	}else{
		node* ancestor = root;
		node* successor = NULL;
		while(ancestor != current){
			if(current->data < ancestor->data) {
				successor = ancestor;
				ancestor = ancestor->left;
			}else{
				ancestor = ancestor->right;
			}
		}
		return successor;
	}
}

node* getInorderPredecessor(node* root, int data)
{
	node* cur = find(root,data);
	if(cur == NULL) return NULL;
	
	if(cur->left != NULL){
		node* temp = cur->left;
		while(temp->right != NULL){
			temp = temp->right;
		}
		return temp;
	}else{
		node* ancestor = root;
		node* predecessor = NULL;
		while(cur != ancestor){
			if(ancestor->data < cur->data){
				predecessor = ancestor;
				ancestor = ancestor->right;
			}else{
				ancestor = ancestor->left;
			}
		}
		return predecessor;
	}
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
	root = insert(root, 17);
	root = insert(root, 6);
	root = insert(root, 11);
	root = insert(root, 16);
	root = insert(root, 27); 
        inorder(root);
        cout << endl;
	int elem;
//	cout << "enter num to be found : " << endl;
//	cin >> elem;
	node* res = NULL;
	/*res = find(root, elem);
	if(res != NULL) cout << "elem found is" << res->data << endl;
	else cout << "elem not found" << endl;*/
	res = getInorderSuccessor(root, 27);
	if(res != NULL) cout << "inorder successor = " << res->data << endl;
	else cout << "no successor found" << endl;
	res = getInorderPredecessor(root, 11);
        if(res != NULL) cout << "inorder predecessor = " << res->data << endl;
        else cout << "no predecessor found" << endl;
	return 0;
}

