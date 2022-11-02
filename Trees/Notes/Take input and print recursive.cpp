#include <vector>
using namespace std;

template <typename T>
class TreeNode {
	public:
	T data;
	vector<TreeNode<T>*> children;

	TreeNode(T data) {
		this->data = data;
	}

};

#include <iostream>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	int n;
	cout << "Enter num of children of " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

void printTree(TreeNode<int>* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size() ; i++) {
		printTree(root->children[i]);
	}
}

int main() {
	/*TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	TreeNode<int>* root = takeInput();
	printTree(root);
	// TODO delete the tree
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	//vector<int> * vp = new vector<int>();
// 	vector<int> v;

// 	for (int i = 0; i < 100; i++) {
// 		cout << "cap:" << v.capacity() << endl;
// 		cout << "size:" << v.size() << endl;
// 		v.push_back(i + 1);
// 	}

// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);

// 	v[1] = 100;

// 	// dont use [] for inserting elements
// 	//v[3] = 1002;
// 	//v[4] = 1234;

// 	v.push_back(23);
// 	v.push_back(234);

// 	v.pop_back();

// 	/*
// 	for (int i = 0; i < v.size(); i++) {
// 		cout << v[i] << endl;
// 	}


// 	cout << v[0] << endl;
// 	cout << v[1] << endl;
// 	cout << v[2] << endl;
// 	cout << v[3] << endl;
// 	cout << v[4] << endl;
// 	cout << v[5] << endl;
// 	cout << v[6] << endl;

// 	cout << "Size: " << v.size() << endl;

// 	cout << v.at(2) << endl;
// 	cout << v.at(6) << endl;
// 	*/
// }
