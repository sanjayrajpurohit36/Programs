#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *start;

void createNode()
{
    int n;             // for integer data
    struct Node *temp; // temp for data insertion node
    struct Node *itr;
    temp = (struct Node *)calloc((sizeof(struct Node)), 1);
    cout << "Enter element: ";
    cin >> n;
    temp->data = n;
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

int LengthOfLL(Node *nodePtr, int length = 0) {
    if(nodePtr == NULL) {
        return length;
    } else {
        int len =  LengthOfLL(nodePtr-> next, ++length);
        return len;
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
        cout << "3. Lenght of linked List " << endl;
        cout << "0. Exit " << endl;
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
            cout << "Output: \n\n";
            cout << "length of LinkedList: " << LengthOfLL(start, 0) << endl;
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