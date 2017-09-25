// The Node struct is defined as follows:
//    struct Node {
//       int data;
//       Node* left;
//       Node* right;
//    }

#include <limits.h>

bool checkBST(Node* root) {
    return is_BST(root, INT_MIN, INT_MAX);
}

bool is_BST(Node* node, int min, int max) {
    if (node == NULL)   return true;
    if (node->data <= min || node->data >= max)   return false;
    return is_BST(node->left, min, node->data) && is_BST(node->right, node->data, max);
}