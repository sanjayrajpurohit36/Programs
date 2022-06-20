#include<iostream>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* takeInput() {
    int nodeData, nodeChildren;
    cout << "Enter node data : ";
    cin >> nodeData;
    TreeNode<int> *root = new TreeNode<int>(nodeData);

    cout << "\n How many children TreeNode 2" << nodeData << " will have : " << endl;
    cin >> nodeChildren;

    for (int i = 0; i < nodeChildren; i++) {
        TreeNode<int>* childrenTreeRoot = takeInput();
        root->children.push_back(childrenTreeRoot); // connecting the childtree node with it's parent
    }
    return root;
}

void displayTree(TreeNode<int> *root) {
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size();i++) {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size();i++) {
        displayTree(root->children[i]);
    }
}

int main() {
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* TreeNode1 = new TreeNode<int>(2);
    // TreeNode<int>* TreeNode2 = new TreeNode<int>(3);

    // Till this point only treee nodes are created not connected until we push the nodes in to the children of a node
    // root->children.push_back(TreeNode1);
    // root->children.push_back(TreeNode2);

    TreeNode<int>* root = takeInput();

    // display the nodes
    displayTree(root);

    return 0;
}