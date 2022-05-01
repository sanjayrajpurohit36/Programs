/*
    WAP to reverse a LinkedList
    Problem Link: https://leetcode.com/problems/reverse-linked-list/
*/

#include <iostream>
#include "Class.cpp"
using namespace std;

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    // head == NULL means linked list is empty,
    // head -> next == NULL means there is only one element present in the linkedlist
    
    if(head == NULL || head-> next == NULL) return head;
    Node *headOfReversedList = reverseLinkedListRec(head -> next);
    Node * tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return headOfReversedList;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput(); // this will take input until user enters -1
        head = reverseLinkedListRec(head);
        printList(head);
    }
    return 0;
}