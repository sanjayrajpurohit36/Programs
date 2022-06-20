#include<iostream>
#include "TreeNode.h"

using namespace std;

void displayTree(TreeNode<int> *root) {
    cout << root->data << endl;
    for (int i = 0; i < root->children.size();i++) {
        displayTree(root->children[i]);
    }
}

int main() {
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* TreeNode1 = new TreeNode<int>(2);
    TreeNode<int>* TreeNode2 = new TreeNode<int>(3);

    // Till this point only treee nodes are created not connected until we push the nodes in to the children of a node

    root->children.push_back(TreeNode1);
    root->children.push_back(TreeNode2);

    // display the nodes
    displayTree(root);

    return 0;
}