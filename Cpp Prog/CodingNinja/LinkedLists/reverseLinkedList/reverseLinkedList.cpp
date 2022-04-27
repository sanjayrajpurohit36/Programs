/* 
    Write a program to reverse the linked list
*/

#include<iostream>
#include "Class.cpp"
using namespace std;

Node* reverse(Node *head)
{
    // Write your code here
    if(head == NULL || head -> next == NULL)
        return head;
    else {
        Node *f = head, *b = head, *tf = head->next;
        while(tf != NULL) {
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

int main()
{
	int t;
	cin >> t;
    while (t--)
    {
		Node *head = takeinput(); // this will take input until user enters -1
        head = reverse(head);
        printList(head);
	}
	return 0;
}