// For a given a Binary Tree of type integer, print the complete information of every node, when traversed in a level-order fashion.
// To print the information of a node with data D, you need to follow the exact format :

//            D:L:X,R:Y

// Where D is the data of a node present in the binary tree. 
// X and Y are the values of the left(L) and right(R) child of the node.
// Print -1 if the child doesn't exist.

// Sample Input 1:
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 8:L:3,R:10
// 3:L:1,R:6
// 10:L:-1,R:14
// 1:L:-1,R:-1
// 6:L:4,R:7
// 14:L:13,R:-1
// 4:L:-1,R:-1
// 7:L:-1,R:-1
// 13:L:-1,R:-1
  
// Sample Input 2:
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 2:
// 1:L:2,R:3
// 2:L:4,R:5
// 3:L:6,R:7
// 4:L:-1,R:-1
// 5:L:-1,R:-1
// 6:L:-1,R:-1
// 7:L:-1,R:-1

#include<queue>

void printLevelWise(BinaryTreeNode<int> *root) {
  
    if(!root) return;
   
    queue<BinaryTreeNode<int> *> pn ;
    pn.push(root);
    
    while(!pn.empty())
    {
        BinaryTreeNode<int> * front= pn.front();
        pn.pop();
        cout<<front->data<<":";
        
        if(front->left)
        {   pn.push(front->left);
            cout<<"L:"<<front->left->data;
        }
         else
             cout<<"L:-1";
        
        cout<<",";
        
        if(front->right)
       {pn.push(front->right);
        cout<<"R:"<<front->right->data<<endl;}
        else
             cout<<"R:-1"<<endl;
    }
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
    printLevelWise(root);
}
*/
