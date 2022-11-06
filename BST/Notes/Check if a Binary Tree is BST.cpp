// Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.
// Note: Duplicate elements should be kept in the right subtree.
 
// Sample Input 1 :
// 3 1 5 -1 2 -1 -1 -1 -1
// Sample Output 1 :
// true
  
// Sample Input 2 :
// 5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
// Sample Output 2 :
// false
  
#include<climits> 

bool solve(BinaryTreeNode<int> *root, int mn, int mx) { 

  if(root==NULL) return 1; 
  if(root->data>mx || root->data<mn) return 0; 

  return (solve(root->left, mn, root->data-1) && solve(root->right, root->data, mx)); 
} 

bool isBST(BinaryTreeNode<int> *root){ 

  return solve(root, INT_MIN, INT_MAX); 
}

/*
void isBSTHelperLeft(BinaryTreeNode<int> *root, int *leftmax){

    if (root->left != NULL && root->left->data > *leftmax)
        *leftmax = root->left->data;
    if (root->right != NULL && root->right->data > *leftmax)
        *leftmax = root->right->data;
}

void isBSTHelperRight(BinaryTreeNode<int> *root, int *rightmin){

    if (root->left != NULL && root->left->data < *rightmin)
        *rightmin = root->left->data;
    if (root->right != NULL && root->right->data < *rightmin)
        *rightmin = root->right->data;
}

bool isBST(BinaryTreeNode<int> *root){

    if (root == NULL) return false;

    int leftmax, rightmin;
    bool val1, val2;

    if (root->left != NULL){
        val1 = isBST(root->left);
        leftmax = root->left->data;
        isBSTHelperLeft(root->left, &leftmax);
    }

    if (root->right != NULL){
        val2 = isBST(root->right);
        rightmin = root->right->data;
        isBSTHelperRight(root->right, &rightmin);
    }

    if (root->left == NULL && root->right == NULL)
        return true;
    
    else if (root->left != NULL && root->right == NULL)
    {
        if ((leftmax < root->data) && (root->left->data < root->data) && val1)
            return true;
        else
            return false;
    }
    else if (root->left == NULL && root->right != NULL)
    {
        if ((rightmin >= root->data) && (root->right->data >= root->data) && val2)
            return true;
        else
            return false;
    }
    else
    {
        if ((leftmax < root->data) && (rightmin >= root->data) && (root->left->data) < (root->data) && (root->right->data >= root->data) && val1 && val2)
            return true;
        else
            return false;
    }
}
*/
