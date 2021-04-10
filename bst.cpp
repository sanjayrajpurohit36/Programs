#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} * start;

void createNode(int element)
{
    int n;            // for data
    struct Node *itr; // iterator for looping the trees
    Node *temp = (struct Node *)(calloc(sizeof(struct Node), 1));
    temp->data = element;
    temp->left = NULL;
    temp->right = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        itr = start;
        while (itr != NULL)
        {
            if (itr->data > temp->data)
            {
                itr = itr->left;
            }
            else if (itr->data < temp->data)
            {
                itr = itr->right;
            }
        }
        itr = temp;
    }
}

void BSTdisplayLRN(Node *temp)
{
    struct Node *itr = temp;
    if (itr == NULL)
    {
        cout << "Tree is empty";
        return;
    }
    else
    {
        BSTdisplayLRN(itr->left);
        BSTdisplayLRN(itr->right);
        cout << temp->data;
    }
}

int main()
{
    int arr[5] = {5, 2, 4, 3, 9};
    for (int i = 0; i < 5; i++)
    {
        createNode(arr[i]);
    }
    BSTdisplayLRN(start);
    return 0;
}