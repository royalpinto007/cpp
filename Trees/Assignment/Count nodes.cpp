// Given a tree and an integer x, find and return the number of nodes which contains data greater than x.
  
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 35 
// Sample Output 1 :
// 3
  
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 10 
// Sample Output 2:
// 5
  
int getLargeNodeCount(TreeNode<int> *root, int x) {
        
    int sum =0;
    
    if(root->data > x) sum++;
    
    for(int i=0;i<root->children.size();i++)
    {
        int smallsum=getLargeNodeCount(root->children[i], x) ;
        sum+=smallsum;
    }
     
    return sum;
}

/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cin >> x;
    cout << getLargeNodeCount(root, x);
}
*/
