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

void createNode(int data)
{
    struct NODE *temp, *itr;
    temp = (struct NODE *)(calloc(sizeof(struct NODE), 1));
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

void display()
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
void delNodeFromFirst()
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
int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        createNode(arr[i]);
    }
    // delNodeFromFirst();
    delNodeFromLast();
    display();
    return 0;
}