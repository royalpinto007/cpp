#include <climits> 
/* The first value of the pair is the minimum value in the tree and the second value of the pair is the maximum value in the tree */ 

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) { 
  pair<int, int> ret = make_pair(INT_MAX, INT_MIN); 
  
  if (root == NULL) return ret; 
  
  pair<int, int> leftPair = getMinAndMax(root->left); 
  pair<int, int> rightPair = getMinAndMax(root->right); 
  
  ret.first = min(min(leftPair.first, rightPair.first), root->data); 
  ret.second = max(max(leftPair.second, rightPair.second), root->data);
  
  return ret; 
}

// alternate solution
/*
#include <climits>
void Min(BinaryTreeNode<int> *root, int *min){

    if (root == NULL) return;

    if ((*min) > root->data)
        *min = root->data;

    Min(root->left, min);
    Min(root->right, min);
}

void Max(BinaryTreeNode<int> *root, int *max){

    if (root == NULL) return;

    if ((*max) < root->data)
        *max = root->data;

    Max(root->left, max);
    Max(root->right, max);
}
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root){

    pair<int, int> p = {0, 0};
    if (root == NULL) return p;

    int min = INT_MAX, max = INT_MIN;
    Min(root, &min);
    Max(root, &max);
    p = {min, max};
    return p;
}
*/

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
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    pair<int, int> ans = getMinAndMax(root);
    cout << ans.first << " " << ans.second;
}
*/
