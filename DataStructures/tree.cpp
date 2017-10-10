#include <iostream>

struct node
{
    int data;
    node* left;
    node* right;
};

void preOrder(node *root) {
    if (root == NULL) return;
    std::cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root) {
	if (root == NULL) return;
	inOrder(root->left);
	std::cout<<root->data<<" ";
	inOrder(root->right);
}

void postOrder(node *root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout<<root->data<<" ";
}

int height(Node* root) {
        if (root == NULL) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }