/*
    Write a program to reverse the linked list
*/

#include <iostream>
#include "Class.cpp"
using namespace std;

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
        cout << "Linked List";
        // head = reverse(head);
        printList(head);
    }
    return 0;
}