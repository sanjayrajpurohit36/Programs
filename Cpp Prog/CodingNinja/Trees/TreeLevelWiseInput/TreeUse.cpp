/*
    Take input level wise
*/

#include<iostream>
#include<queue>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* takeInputLevelwise() {
    int rootData;
    cout << "Enter node data : ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue <TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);


    // we need to do this process until the queue becomes empty
    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        int nodeChildren;
        cout << "\n How many children TreeNode " << front->data << " will have : ";
        cin >> nodeChildren;
        /*
            below code is for taking input of childnodes of the node which is present on the front of the queue
        */
        for(int i = 0; i < nodeChildren; i++) {
            int childData;
            cout << "Enter the " << i+1 << "th child of the node : ";
            cin >> childData;

            // we need to create these nodes dynamically so that in next loop the memory should not get de-allocated
            TreeNode<int> *childNode = new TreeNode<int>(childData);
            front->children.push_back(childNode);
            pendingNodes.push(childNode);
        }
    }

    return root;
}

void displayTreeLevelWise(TreeNode<int> *root) {
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        TreeNode<int> *node = pendingNodes.front();
        pendingNodes.pop();
        cout << node->data << " : ";
        int childrenCount = node->children.size();
        for (int i = 0; i < childrenCount; i++)
        {
            cout << node->children[i]->data << " , ";
            pendingNodes.push(node->children[i]);
        }
        cout << endl;
    }
}

int countNodes(TreeNode<int>* root, int count = 0) {
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++) {
        ans += countNodes(root->children[i]);
    }
    return ans;
}

void printAtLevelK(TreeNode<int>* root, int level) {
    if(level == 0) {
        cout << root->data << " ";
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i], level-1);
    }
}

int main() {
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* TreeNode1 = new TreeNode<int>(2);
    // TreeNode<int>* TreeNode2 = new TreeNode<int>(3);

    // Till this point only treee nodes are created not connected until we push the nodes in to the children of a node
    // root->children.push_back(TreeNode1);
    // root->children.push_back(TreeNode2);

    TreeNode<int>* root = takeInputLevelwise();

    // display the nodes
    cout << endl;
    displayTreeLevelWise(root);

    cout << "\nPrint total no of nodes : " << endl;
    cout << countNodes(root);

    cout <<" \nPrint all nodes at level 1 : "<< endl;
    printAtLevelK(root, 1);
    return 0;
}