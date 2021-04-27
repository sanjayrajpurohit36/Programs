#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

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

void revList()
{
    struct Node *iterator;
    vector<int> stack;
    iterator = start;
    while (iterator != NULL)
    {
        stack.push_back(iterator->data);
        iterator = iterator->next;
    }
    int i = stack.size() - 1;
    iterator = start;
    while (iterator != NULL)
    {

        iterator->data = stack[i];
        i--;
        iterator = iterator->next;
    }
}
void insertAtFirst()
{
    struct Node *temp;
    cout << " Enter your element: ";
    temp = (struct Node *)calloc((sizeof(struct Node)), 1);
    cin >>
        temp->data;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}

void insertAtLast()
{
    int data;          // for node data
    struct Node *temp; // for node
    struct Node *itr;
    temp = (struct Node *)calloc((sizeof(struct Node)), 1);
    cout << "Enter element: ";
    cin >> temp->data;
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
        itr = temp;
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
        cout << "3. Reverse linked list" << endl;
        cout << "4. Insert at First Position" << endl;
        cout << "5. Insert at Last Position" << endl;
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
            revList();
            displayList();
            break;
        case 4:
            cout << "Output \n\n";
            insertAtFirst();
            displayList();
            break;
        case 5:
            cout << "Output \n\n";
            insertAtLast();
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