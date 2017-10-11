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

void levelOrder(node * root) {
    if (root == NULL) return;
    queue <node*> q;
    q.push(root);
    node* tmp = NULL;
    while (!q.empty()) {
        tmp = q.front();
        q.pop();
        std::cout<<tmp->data<<" ";
        if (tmp->left != NULL) q.push(tmp->left);
        if (tmp->right != NULL) q.push(tmp->right);
    }
}

node* insert(node * root, int value) {
    if (root == NULL) {
        node* n = new node();
        n->data = value;
        n->left = NULL;
        n->right = NULL;
        root = n;
        return root;
    } else if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

int height(Node* root) {
        if (root == NULL) return 0;
        return max(height(root->left), height(root->right)) + 1;
}