template <typename T>

class BinaryTreeNode {
	public:
	T data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(T data) {
		this->data = data;
		left = NULL;          // so that left and right don't store garbage values in the beginning when the root node is created
		right = NULL;
	}

	~BinaryTreeNode() {
		delete left;
		delete right;
	}
}

/*
#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

int main() {
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
	root->left = node1;
	root->right = node2;
}
*/
