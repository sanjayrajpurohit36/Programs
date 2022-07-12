/*
    Swap nodes of a linked list
*/

#include<iostream>
#include "Class.cpp"
using namespace std;

Node* swapNodes(Node *head)
{
    // Write your code here
    if(head == NULL || head -> next == NULL) return head;

    Node *slow = head,  *fast = head, *nextNode = NULL, *pt = NULL;
    Node *newHead = NULL;

    int i = 1;
    while(fast != NULL && fast -> next != NULL) {
        fast = fast->next;
        i++;
        if (i == 2)
        {
            nextNode = fast->next;
            fast->next = slow;
            slow->next = nextNode;

            if(pt == NULL)
                pt = slow;
            else {
                pt->next = fast;
                pt = slow;
            }
            if (newHead == NULL)
                newHead = fast;
            fast = nextNode;
            slow = nextNode;
            i = 1;
        }
    }

    return newHead;
}

int main()
{
	int t;
	cin >> t;
    while (t--)
    {
		Node *head = takeinput(); // this will take input until user enters -1
        head = swapNodes(head);
        printList(head);
	}
	return 0;
}