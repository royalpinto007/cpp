// For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.

// Sample Input 1:
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
// 7
// Sample Output 1:
// true
// Explanation For Output 1:
// Clearly, we can see that 7 is present in the tree. So, the output will be true.
  
// Sample Input 2:
// 2 3 4 -1 -1 -1 -1
// 10
// Sample Output 2:
// false
  
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL) return false;
  
    if (root->left != NULL)
    {
        bool val = isNodePresent(root->left, x);
        if (val == true)
            return true;
    }
    if (root->right != NULL)
    {
        bool val = isNodePresent(root->right, x);
        if (val == true)
            return true;
    }
    if (root->data == x)
        return true;
    else
        return false;
}

/*
#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int x;
    cin >> x;
    cout << ((isNodePresent(root, x)) ? "true" : "false");
}
*/
