// For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
// The root will remain the same. So you just need to insert nodes in the given Binary Tree.

// Sample Input 1:
// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 10 
// 10 30 
// 20 30 60 
// 20 50 60 
// 40 50 
// 40 
  
// Sample Input 2:
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// Sample Output 2:
// 8 
// 8 10 
// 5 10 
// 5 6 
// 2 6 7 
// 2 7

void insertDuplicateNode(BinaryTreeNode<int> *root){
    
    if (root == NULL)  return;
    
    if (root->left != NULL){

        BinaryTreeNode<int> *temp1 = root->left;
        BinaryTreeNode<int> *temp2 = new BinaryTreeNode<int>(root->data);
        root->left = temp2;
        temp2->left = temp1;
    }
    else{
        BinaryTreeNode<int> *temp = new BinaryTreeNode<int>(root->data);
        root->left = temp;
    }
    insertDuplicateNode(root->left->left);
    insertDuplicateNode(root->right);
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

void printLevelATNewLine(BinaryTreeNode<int>* root) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int>* first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    insertDuplicateNode(root);
    printLevelATNewLine(root);
    delete root;
}
*/
