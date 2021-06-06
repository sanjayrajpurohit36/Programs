/****
 * You're given a Pointer to the node which needs to be deleted now WAP for that.
 * 
 * Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.
 * It is guaranteed that the node to be deleted is not a tail node in the list.
 * Example 1:
 * Input: head = [4,5,1,9], node = 5
 * Output: [4,1,9]
 * Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int x;
    Node *next;
} *start = NULL;

void createNode()
{
    struct Node *temp, *itr;
    temp = (struct Node *)(calloc(sizeof(Node), 1));
    int data;
    cin >> data;
    temp->x = data;
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
/**
 * Function to show the linkedlist
 * */
void show()
{
    Node *temp;
    if (start == NULL)
    {
        cout << "linked list is empty";
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            cout << temp->x << " ->";
            temp = temp->next;
        }
    }
}

/**
 * Function to reach the nth Node of the linkedlist 
 * Note: Kindly enter the node which is feasiable to reach in linkedlist and it should not be the last node of the linked list
 * @param int n
 * */
Node *reachToNthNode(int n)
{
    Node *itr;
    n--;
    if (start == NULL)
    {
        cout << "list is empty";
    }
    else
    {
        itr = start;
        while (n--)
        {
            itr = itr->next;
        }
    }
    return itr;
}

/**
 * Delete node which is provided
 * param Node *toBeDeletedNode
 * */
void deleteNthNode(Node *toBeDeletedNode)
{
    Node *itr;
    if (start == NULL)
    {
        cout << "list is empty";
    }
    else
    {
        itr = toBeDeletedNode->next;
        while (itr->next != NULL)
        {
            toBeDeletedNode->x = itr->x;
            toBeDeletedNode = toBeDeletedNode->next;
            itr = itr->next;
        }
        toBeDeletedNode->x = itr->x;
        toBeDeletedNode->next = NULL;
        free(itr);
        cout << "\ntoBeDeletedNode && last node" << toBeDeletedNode->x << " " << itr->x;
    }
}

int main()
{
    cout << "Enter data in linked list: \n";
    Node *nthNodePointer;
    for (int i = 0; i < 5; i++)
    {
        createNode();
    }
    show();
    nthNodePointer = reachToNthNode(3); // reach to third node of linked list
    deleteNthNode(nthNodePointer);      // send the pointer to third node of the list to delete function
    cout << "\n New linked List";
    show();
    return 0;
}