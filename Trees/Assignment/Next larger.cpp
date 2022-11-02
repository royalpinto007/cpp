// Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. 
// Find a node with value just greater than n.
  
// Note: Return NULL if no node is present with the value greater than n.
  
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// 18
// Sample Output 1 :
// 20
  
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// 21
// Sample Output 2:
// 30

TreeNode<int>* getNextLargerElement(TreeNode<int> *root, int n) {
    
    if(root==NULL) return NULL;		// edge case
  
    TreeNode<int>*max =NULL;
    
    if(root->data > n)
        max=root;
    
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*childmax= getNextLargerElement(root->children[i], n);
        
        if(childmax==NULL)
        {continue;}
        
        else
        {
            if(max==NULL)
                max=childmax;
            else if(childmax->data > n  && childmax->data < max->data)
                max= childmax;
        }
    }
    return max;
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
    TreeNode<int>* ans = getNextLargerElement(root, x);

    if (ans != NULL) {
        cout << ans->data;
    }
}
*/
