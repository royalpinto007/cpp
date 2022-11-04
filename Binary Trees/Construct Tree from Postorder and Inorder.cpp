// For a given postorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. 
// You just need to construct the tree and return the root.

// Sample Input 1:
// 7
// 4 5 2 6 7 3 1 
// 4 2 5 1 6 3 7 
// Sample Output 1:
// 1 
// 2 3 
// 4 5 6 7 
  
// Sample Input 2:
// 6
// 2 9 3 6 10 5 
// 2 6 3 9 5 10 
// Sample Output 2:
// 5 
// 6 10 
// 2 3 
// 9 

BinaryTreeNode<int> *buildTreeHelper(int *postorder, int *inorder, int ps, int pe, int is, int ie)
{
    if (ps > pe)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(postorder[pe]);
    int k = 0;
    for (int i = is; i <= ie; i++)
    {
        if (postorder[pe] == inorder[i])
        {
            k = i;
            break;
        }
    }
    int lps = ps;              // left prestart
    int lis = is;              // left instart
    int lie = k - 1;           // left inend
    int lpe = lie - lis + lps; // left  pre end
    int rps = lpe + 1;         // right prestart
    int rpe = pe - 1;          //  right preend
    int ris = k + 1;           // right instart
    int rie = ie;              // right inend
    root->left = buildTreeHelper(postorder, inorder, lps, lpe, lis, lie);
    root->right = buildTreeHelper(postorder, inorder, rps, rpe, ris, rie);
    return root;
}

BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength){
  
    return buildTreeHelper(postorder, inorder, 0, postLength - 1, 0, inLength - 1);
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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
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
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}
*/
