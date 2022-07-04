#include<iostream>
#include<queue>
#include "BinaryTreeNode.h"

using namespace std;
/**
 * @brief taking the binary tree input level wise
 *
 * @return BinaryTreeNode<int>*
 */
BinaryTreeNode<int> * takeInputLevelwise () {
    cout << "Enter root data : ";
    int nodeData;
    cin >> nodeData;
    if(nodeData == -1)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(nodeData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0) { // we need to work till the queue is not empty
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1) {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftChildData);
            front->left = leftChild;
            pendingNodes.push(leftChild);
        }

        cout << "Enter right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1) {
            BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightChildData);
            front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}

BinaryTreeNode<int> * takeInput () {
    cout << "Enter node data : ";
    int nodeData;
    cin >> nodeData;
    if(nodeData == -1)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(nodeData);
    root->left = takeInput();
    root->right = takeInput();
    return root;
}

void displayTree(BinaryTreeNode <int> *root) {
    if(root == NULL)
        return;
    cout << root->data << ":";

    if(root->left != NULL) {
        cout << " L " << root->left->data << ", ";
    }
    if(root->right != NULL) {
        cout << " R " << root->right->data;
    }
    cout << endl;
    displayTree(root->left);
    displayTree(root->right);
}

void displayTreeLevelwise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root == NULL) {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        cout << "L:"; //we need to print this in both the cases whether node has any value or node is not present
        if(front->left!= NULL)
        {
            pendingNodes.push(front->left);
            cout << front->left->data << ",";
        } else {
            cout << "-1" << ",";
        }
		cout << "R:";//we need to print this in both the cases
        if(front->right!= NULL)
        {
            pendingNodes.push(front->right);
            cout << front->right->data << endl;
        }else {
            cout << "-1" << endl;
        }
    }
}

int main()
{
    // BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* TreeNode1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* TreeNode2 = new BinaryTreeNode<int>(3);

    // root->left = TreeNode1;
    // root->right = TreeNode2;

    BinaryTreeNode<int>* root = takeInputLevelwise();

    // display the nodes
    // displayTree(root);
    cout << "\n Display tree levelwise : " << endl;
    displayTreeLevelwise(root);
    delete (root);
    return 0;
}