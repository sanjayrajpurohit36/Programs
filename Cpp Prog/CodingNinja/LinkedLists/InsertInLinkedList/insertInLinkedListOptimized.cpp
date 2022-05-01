/* 
    Create a fuinction to insert node in a liked list in an optimized way whose time complexity should be O(1).
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = NULL;
struct Node *tail = NULL;

void createNodeOptimized()
{
    int n;             // for integer data
    struct Node *temp; // temp for data insertion node
    struct Node *itr;
    temp = (struct Node *)calloc((sizeof(struct Node)), 1);
    cout << "Enter element: ";
    cin >> n;
    temp->data = n;
    temp->next = NULL;

    if (start == NULL && tail == NULL)
    {
        start = temp;
        tail = temp;
    }
    else
    {
        /* 
            insetring new node like this costs the time complexity of O(n^2) as for insterting the nth node of the 
            list the pointer has to traverse n-1 nodes
        
            itr = start;
        
            while (itr->next != NULL)
            {
                itr = itr->next;
            }
            itr->next = temp; 
        */

        tail->next = temp;
        tail = tail->next;
        /* 
            OR both are fine
            end = temp;
        */
    }
}

void displayList()
{
    struct Node *iterator;
    if (start == NULL)
    {
        cout << "list is empty";
    }
    else
    {
        iterator = start;
        while (iterator != NULL)
        {
            cout << iterator->data << "->";
            iterator = iterator->next;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << endl;
        cout << "Menu Driven Linked List" << endl;
        cout << "1. Insert In linked list" << endl;
        cout << "2. Display linked list" << endl;
        cout << "0. Exit " << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Output \n\n";
            createNodeOptimized();
            displayList();
            break;
        case 2:
            cout << "Output \n\n";
            displayList();
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    }
    cout << endl;
    return 0;
}