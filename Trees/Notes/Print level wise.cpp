#include <queue>
using namespace std;

#include <iostream>
#include <vector>

void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    queue <TreeNode<int>*> pn;
    pn.push(root);
    
    while(!pn.empty()){
        TreeNode <int>* cur=pn.front();
        pn.pop();
        
        cout<<cur->data<<":";
        
        for(int i=0;i<cur->children.size();i++){
            if(i==cur->children.size()-1)
                cout<<cur->children[i]->data;
            else
                cout<<cur->children[i]->data<<",";
            pn.push(cur->children[i]);
        }
        cout<<endl;
    }
}

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// template <typename T>
// class TreeNode {
//    public:
//     T data;
//     vector<TreeNode<T>*> children;

//     TreeNode(T data) { this->data = data; }

//     ~TreeNode() {
//         for (int i = 0; i < children.size(); i++) {
//             delete children[i];
//         }
//     }
// };

// #include "solution.h"

// TreeNode<int>* takeInputLevelWise() {
//     int rootData;
//     cin >> rootData;
//     TreeNode<int>* root = new TreeNode<int>(rootData);

//     queue<TreeNode<int>*> pendingNodes;

//     pendingNodes.push(root);
//     while (pendingNodes.size() != 0) {
//         TreeNode<int>* front = pendingNodes.front();
//         pendingNodes.pop();
//         int numChild;
//         cin >> numChild;
//         for (int i = 0; i < numChild; i++) {
//             int childData;
//             cin >> childData;
//             TreeNode<int>* child = new TreeNode<int>(childData);
//             front->children.push_back(child);
//             pendingNodes.push(child);
//         }
//     }

//     return root;
// }

// int main() {
//     TreeNode<int>* root = takeInputLevelWise();
//     printLevelWise(root);
// }
