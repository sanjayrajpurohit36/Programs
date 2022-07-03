/*
    Take input level wise
*/

#include<iostream>
#include<stack>
#include<queue>
#include "TreeNode.h"

using namespace std;

class Solution {
    public:
        TreeNode<int>* max;
        TreeNode<int>* smax;

        Solution() {
            max = NULL;
            smax = NULL;
        }
}S;

TreeNode<int> * takeInputLevelwise()
{
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
/**
 * @brief Get the Height of a given tree
 *
 * @param root Node
 * @return int
 */
int getHeight(TreeNode<int>* root) {
    if(root == NULL)
        return -1;
    int height = 0;
    for (int i = 0; i < root->children.size(); i++) {
        int subTreeHeight = getHeight(root->children[i]);
        height = max(height, subTreeHeight);
    }
    return height + 1; // doing + 1 for root node
}

/**
 * @brief Count nodes of a given tree
 *
 * @param root
 * @param count
 * @return int
 */
int countNodes(TreeNode<int>* root, int count = 0) {
    if(root == NULL) // edge case
        return 0;
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++) {
        ans += countNodes(root->children[i]);
    }
    return ans;
}

/**
 * @brief Print all the nodes at level K
 *
 * @param root
 * @param level
 */
void printAtLevelK(TreeNode<int>* root, int level) {
    if(root == NULL) // edge case
        return;
    if(level == 0) {
        cout << root->data << " ";
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i], level-1);
    }
}

/**
 * @brief Count leaf nodes of a given tree
 *
 * @return int
 */

int countLeafNodes(TreeNode<int>* root) {
    if(root == NULL) // edge case
        return -1;
    if(root->children.empty()) { // if tree has only root node no children
        return 1;
    }
    int leafNodeCount = 0;
    if(root->children.size() > 0)
        for (int i = 0; i < root->children.size(); i++) {
            leafNodeCount += countLeafNodes(root->children[i]);
        }
    else return leafNodeCount + 1;
    return leafNodeCount;
}

/**
 * @brief Post order traversal
 *
 * @param root
 */
void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL)  { // edge case
        return;
    }
    for( int i = 0 ; i < root -> children.size(); i++) {
        printPostOrder(root->children[i]);
    }
    cout << root-> data << " ";
}

/**
 * @brief Function to delete tree after all the operations are done
 *
 * @param root
 */
void deleteTree(TreeNode<int> * root) {
    /*
        We can't delete the root because after deleting the root node, we'll lose all the
        address of the children of the root node, because the vector which we have declared with every node
        to store the address of the children nodes is statically allocated so that will also be deleted,
        so in order to delete the whole tree we need to delete the children first then the root, so
        we'll traverse the whole tree using POST order

    */

    for (int i = 0; i < root->children.size(); i++) {
        deleteTree(root -> children[i]);
    }
    delete root;
}

/**
 * @brief Get the Second Largest Node object
 *
 * @param root
 * @return TreeNode<int>*
 */
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL)
        return NULL;

    if(S.max == NULL) {
        S.max = root;
    }

    for (int i = 0; i < root->children.size(); i++) {
        S.smax = getSecondLargestNode(root->children[i]);
    }
    if(S.max->data < root->data) {
        S.smax = S.max;
        S.max = root;
    }
    if(S.smax == NULL || (S.smax->data < root->data && S.max->data > root->data)) {
        S.smax = root;
    }
    return S.smax;
}


/**
 * @brief replace all nodes values with its depth value helper
 *
 * @param root
 * @param depth
 */
void replaceWithDepthValueHelper(TreeNode<int>* root, int depth = 0) {
    if(root == NULL) return;

    root->data = depth;
    for(int i = 0 ; i < root-> children.size(); i++) {
        replaceWithDepthValueHelper(root->children[i], depth + 1) ;
    }
    depth = depth - 1;
}

/**
 * @brief replace all node values with its depth value
 *
 * @param root
 */
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    replaceWithDepthValueHelper(root);
}


/**
 * @brief Check both the trees are identical
 *
 * @param root1
 * @param root2
 * @return true
 * @return false
 */
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
	if(root1->children.size() != root2->children.size()) {
        return false;
    }

    for(int i = 0; i < root1->children.size() ; i++) {
    	return areIdentical(root1->children[i], root2->children[i]);
    }

    for(int i = 0; i < root1->children.size() ; i++) {
        if(root1->children[i] != root2->children[i]) {
            return false;
        }
    }
    return true;

}
int main() {
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* TreeNode1 = new TreeNode<int>(2);
    // TreeNode<int>* TreeNode2 = new TreeNode<int>(3);

    // Till this point only treee nodes are created not connected until we push the nodes in to the children of a node
    // root->children.push_back(TreeNode1);
    // root->children.push_back(TreeNode2);

    TreeNode<int>* root = takeInputLevelwise();
    TreeNode<int>* root2 = takeInputLevelwise();
    // display the nodes
    cout << endl;
    displayTreeLevelWise(root);
    displayTreeLevelWise(root2);


    cout << "\nPrint height of the tree : " << endl;
    cout << getHeight(root);

    cout << "\nPrint total no of nodes : " << endl;
    cout << countNodes(root);

    cout <<" \nPrint all nodes at level 1 : "<< endl;
    printAtLevelK(root, 1);

    cout << "\nCount leaf nodes of the tree : " << endl;
    cout << countLeafNodes(root);

    cout << "\nPost order traversal : " << endl;
    printPostOrder(root);

    cout << "\nSecond Largest Node in tree : " << endl;
    TreeNode<int> *secondLargestNode = getSecondLargestNode(root);
    cout << secondLargestNode->data;

    // cout << "\n Replaced all nodes with their depth value" << endl;
    // replaceWithDepthValue(root);
    // displayTreeLevelWise(root);

    cout << "\nCheck if both the trees are identical" << endl;
    // cout << areIdentical(root, root2); not able to take the second tree in input


    // deleteTree(root); // this function will also delete the whole tree
    delete root; // deleting the tree like this we'll need to implement destructor
    return 0;
}