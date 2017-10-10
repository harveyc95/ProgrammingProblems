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