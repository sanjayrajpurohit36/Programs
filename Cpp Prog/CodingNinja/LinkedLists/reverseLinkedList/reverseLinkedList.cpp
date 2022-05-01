/*
    WAP to reverse a LinkedList
    Problem Link: https://leetcode.com/problems/reverse-linked-list/
*/

#include <iostream>
#include "Class.cpp"
using namespace std;

/*
    Function reverse 
    @param head head pointer of the linked list
    reverses the linked list iteratively
*/
Node *reverseTwo(Node *head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    Node *b = NULL, *f = head, *nextNode = head->next;
    
    while(nextNode != NULL) {
        f->next = b;
        b = f;
        f = nextNode;
        nextNode = nextNode->next;
    }

    /* 
        at this point f is on the last node of the linked list and pointer "b" is on 
        the second last node but they are not connected from b -> f we need to connect 
        them as f -> b so in order to do that.
    */
    f->next = b;
    b = f;
    return b;
}

/*
    Function reverse 
    @param head head pointer of the linked list
    reverses the linked list iteratively
*/

Node *reverse(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;
    else
    {
        Node *f = head, *b = head, *tf = head->next;
        while (tf != NULL)
        {
            f = tf;
            // cout << f->data << endl;
            tf = tf->next;
            f->next = b;
            // cout << f->data << " -> " << b->data << endl;
            b = f;
        }
        head->next = NULL;
        head = f;
    }
    return head;
}

/*
    Function to just print the linked list in reverse order not changing the pointers.
*/
void printReverse(Node *head)
{
    if (head == NULL)
        return;
    else
    {
        Node *current = head;
        printReverse(head->next);
        cout << current->data << " ";
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput(); // this will take input until user enters -1
        cout << "Printing linked list in reverse not changing the pointers: ";
        printReverse(head);
        cout << endl;
        cout << "Linked List: ";
        head = recursiveReverseLinkedList(head);
        printList(head);
    }
    return 0;
}