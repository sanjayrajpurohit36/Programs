// Never make iterator pointer stand on NULL
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct NODE
{
    int data;
    struct NODE *next;
} * start;

void createNode()
{
    struct NODE *temp, *itr;
    int data;
    temp = (struct NODE *)(calloc(sizeof(struct NODE), 1));
    cout << "\nEnter data for node:";
    cin >> data;
    temp->data = data;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        itr = start;
        while (itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = temp;
    }
}

void displayList()
{
    struct NODE *itr;
    if (start == NULL)
        cout << "linked list is empty \n";
    else
    {
        itr = start;
        cout << endl;
        while (itr != NULL)
        {
            cout << itr->data << "->";
            itr = itr->next;
        }
    }
}

// function will delete node from the begining of the list
void delNodeFromStart()
{
    struct NODE *itr;
    if (start == NULL)
    {
        cout << "linked list is empty" << endl;
    }
    else
    {
        itr = start;
        start = start->next;
        itr->next = NULL;
        free(itr);
    }
}

// This function will delete node from the last
void delNodeFromLast()
{
    struct NODE *itr;
    struct NODE *toBeDeletedNode;
    if (start == NULL)
    {
        cout << "linked list is empty" << endl;
    }
    else
    {
        itr = start;
        if (start->next == NULL) // which means start is the end
        {
            // delNodeFromStart();
            // cout << "coming here means start -> next is null only one node is there.";
            delNodeFromStart();
        }
        else
        {
            while (itr->next->next != NULL) // by this itr will stand on one node before the node having next as NULL // or we can say that it will reach on second last node of the linked list
            {
                itr = itr->next;
            }
            toBeDeletedNode = itr->next; // setting toBeDeletedNode As the last node
            itr->next = NULL;
            cout << "data of node to be deleted:" << toBeDeletedNode->data;
            free(toBeDeletedNode);
        }
    }
}

// This function will accept position and will delete node from that position.
void delNodeFromPos(int pos)
{
    struct NODE *itr;
    struct NODE *toBeDeletedNode;
    if (start == NULL)
    {
        cout << "\nLinkedlist is empty";
    }
    else
    {
        if (pos == 1)
            delNodeFromStart();
        else
        {
            itr = start;
            for (int i = 0; i < pos && itr != NULL; i++)
                itr = itr->next;

            if (itr->next == NULL)
                delNodeFromLast();
            else
            {
                toBeDeletedNode = itr->next;
                itr->next = itr->next->next;
                cout << "Node data which is going to be deleted" << toBeDeletedNode->data;
                free(itr);
            }
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\n\n";
        cout << "Menu Driven Linked List Deletion" << endl;
        cout << "1. Insert In linked list" << endl;
        cout << "2. Display linked list" << endl;
        cout << "3. Delete Node From Start" << endl;
        cout << "4. Delete Node From End" << endl;
        cout << "5. Delete Node From a Position" << endl;
        cout << "0. Exit Program" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Output \n\n";
            createNode();
            displayList();
            break;
        case 2:
            cout << "Output \n\n";
            displayList();
            break;
        case 3:
            cout << "Output \n\n";
            delNodeFromStart();
            displayList();
            break;
        case 4:
            cout << "Output \n\n";
            delNodeFromLast();
            displayList();
            break;
        case 5:
            cout << "Output \n\n";
            int pos;
            cout << "\n\nEnter position to delete the node: ";
            cin >> pos;
            delNodeFromPos(pos);
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