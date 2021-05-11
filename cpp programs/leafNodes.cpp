/**
 * Print all the leaf nodes of BST
 * */
// #include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
} *root = NULL;

void createNode(int n)
{
    Node *temp, *itr, *parent;
    temp = (struct Node *)(calloc(sizeof(struct Node), 1));
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        itr = root;
        while (itr != NULL)
        {
            parent = itr;
            if (temp->data >= itr->data) // go to right part of tree
                itr = itr->right;
            else // temp-> data < itr -> data go to left part ot the tree
                itr = itr->left;
        }
        if (parent->data >= temp->data)
            parent->left = temp;
        else
            parent->right = temp;
    }
}

void PreOrder(Node *temp) // Node left right
{
    if (temp == NULL)
        return;
    if (temp->right == NULL && temp->left == NULL)
    {
        cout << temp->data << " -> ";
        return;
    }
    PreOrder(temp->left);
    PreOrder(temp->right);
}

int main()
{
    int arr[5] = {5, 2, 4, 3, 9};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        createNode(arr[i]);
    }
    PreOrder(root);
    return 0;
}
