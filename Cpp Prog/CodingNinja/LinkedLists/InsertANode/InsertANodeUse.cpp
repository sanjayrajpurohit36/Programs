/*
    WAP to insert node at given pos in the linked list.
*/

#include<iostream>
#include "Class.cpp"
using namespace std;

Node* insertNodeAtPos(Node *head, int data, int pos)
{
    // Write your code here
    Node *temp = head;
    Node *newNode = new Node(data);
    if(pos == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        int i = 0;
        while (i < pos - 1 && temp != NULL) {
            temp = temp->next;
            i++;
        }
        if(temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        }
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
		int pos, data;
		cin >> pos >> data;
        head = insertNodeAtPos(head, data ,pos);
        printList(head);
        cout << endl;
	}
	return 0;
}