#include<bits/stdc++.h>
 
using namespace std;
 
void fastio() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

struct tree_node {
	int data;
	tree_node* left;
	tree_node* right;

	tree_node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

//Print all the nodes at the current level
void levelorder_traversal(tree_node* root) {
	queue<tree_node*> q;
	if(root == NULL) cout<<"null";
	else {
		q.push(root);
		while(!q.empty()) {
			tree_node* node = q.front();
			q.pop();
			if(node->left != NULL) q.push(node->left);
			if(node->right != NULL) q.push(node->right);
			cout<<node->data<<" ";
		}
	}
}

/*
			1
		   / \
		  2   3
		 / \   \
		4	5   6
*/

int main() {
 
	fastio();
	
	tree_node* root = new tree_node(1);
	root->left = new tree_node(2);
	root->right = new tree_node(3);
	root->left->left = new tree_node(4);
	root->left->right = new tree_node(5);
 	root->right->right = new tree_node(6);

 	levelorder_traversal(root);

	return 0;
}