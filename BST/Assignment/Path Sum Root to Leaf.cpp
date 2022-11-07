// For a given Binary Tree of type integer and a number K, print out all root-to-leaf paths where the sum of all the node data along the path is equal to K.
  
// Sample Input 1:
// 2 3 9 4 8 -1 2 4 -1 -1 -1 6 -1 -1 -1 -1 -1
// 13
// Sample Output 1:
// 2 3 4 4 
// 2 3 8
  
// Sample Input 2:
// 5 6 7 2 3 -1 1 -1 -1 -1 9 -1 -1 -1 -1
// 13
// Sample Output 2:
// 5 6 2
// 5 7 1

#include <vector>
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k, vector<int> path){

    if (root == NULL)   return;

    path.push_back(root->data);
    k = k - root->data;
    if (!root->left && !root->right)
    {
        if (k == 0)
        {
            for (int i : path)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        path.pop_back();
        return;
    }
    rootToLeafPathsSumToK(root->left, k, path);
    rootToLeafPathsSumToK(root->right, k, path);
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k){

    vector<int> v;
    rootToLeafPathsSumToK(root, k, v);
    return;
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

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
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
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}
*/
