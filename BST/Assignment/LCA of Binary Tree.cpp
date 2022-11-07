// Given a binary tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the binary tree.
  
// LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 

// Sample Input 1:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 2 10
// Sample Output 1:
// 10
  
// Sample Input 2:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 2 6
// Sample Output 2:
// 5
  
// Sample Input 3:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 12 78
// Sample Output 3:
// -1

int getLCA(BinaryTreeNode<int> *root, int a, int b){

    if (root == NULL)  return -1;
    
    if (root->data == a || root->data == b)
        return root->data;

    int left = getLCA(root->left, a, b);
    int right = getLCA(root->right, a, b);

    if (left == -1 && right == -1)
        return -1;
    else if (left != -1 && right == -1)
        return left;
    else if (left == -1 && right != -1)
        return right;
    else
        return root->data;
}

/*
#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int a, b;
    cin >> a >> b;
    cout << getLCA(root, a, b);
    delete root;
}
*/
