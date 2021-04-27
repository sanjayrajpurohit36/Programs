/*                  5
                    
               /          \
             4             8
            /            /    \   
          3             6      9  BST
*/
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
    int n;                     // for data
    struct Node *itr, *parent; // iterator for looping the trees
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
            parent = itr;
            if (itr->data >= temp->data)
            {
                itr = itr->left;
            }
            else
                itr = itr->right;
        }
        if (parent->data >= temp->data)
        {
            parent->left = temp;
        }
        else
            parent->right = temp;
    }
}

void BSTInorder(Node *temp) // Inorder Left Node Right
{
    struct Node *itr = temp;
    if (temp == NULL)
    {
        return;
    }

    BSTInorder(itr->left);
    cout << itr->data << "->";
    BSTInorder(itr->right);
}

void BSTPreorder(Node *temp) // Node Left Right
{
    Node *itr = temp;
    if (itr == NULL)
    {
        return;
    }
    else
    {
        cout << itr->data << "->";
        BSTPreorder(itr->left);
        BSTPreorder(itr->right);
    }
}

void BSTPostorder(Node *temp) // Post order
{
    struct Node *itr = temp;
    if (itr == NULL)
    {
        return;
    }
    else
    {
        BSTPostorder(itr->left);
        BSTPostorder(itr->right);
        cout << itr->data << "->";
    }
}

int main()
{
    int arr[5] = {5, 2, 4, 3, 9};
    for (int i = 0; i < 5; i++)
    {
        createNode(arr[i]);
    }
    char choice;
    while (1)
    {
        cout << "\n";
        cout << "1.InOrder" << endl;
        cout << "2.PreOrder" << endl;
        cout << "3.PostOrder" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case '1':
            BSTInorder(start);
            break;
        case '2':
            BSTPreorder(start);
            break;
        case '3':
            BSTPostorder(start);
            ;
            break;
        case '0':
            exit(0);
            break;
        default:
            cout << "Bad Choice";
        }
    }
    cout
        << "\n";
    return 0;
}