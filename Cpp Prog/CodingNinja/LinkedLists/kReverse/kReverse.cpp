/*
    WAP to reverse a kLinkedList
*/

#include <iostream>
#include "Class.cpp"

using namespace std;

class Pair{
    public:
        Node *head;
        Node *tail;

        Pair() {
            head = NULL;
            tail = NULL;
        }
}Obj;

Pair reverse(Node *head) {
    // cout << "reverse k lie aaya hua head" << head->data << endl;
    Node *f = head->next, *b = head, *tf = head->next;
    if(head == NULL || head -> next == NULL) {
        Obj.head = head;
        Obj.tail = head;
        return Obj;
    }
    while (tf != NULL) {
        f = tf;
        tf = tf->next;
        f->next = b;
        b = f;
    }
    head->next = NULL;
    Obj.head = f;
    Obj.tail = head;
    head = f;
    return Obj;
}


Node *kReverse(Node *head, int K) {
    Node *f = head, *b = head, *tf = head;
    if(head == NULL || head -> next == NULL || K <= 1) {
        return head;
    }
    int counter = 1;
    Node *nHead = NULL, *nTail = NULL;

    while(tf != NULL) {
        if(counter == K || tf -> next == NULL) {
            b = tf; //  back node = itr so, that I can jump to next node and set NULL after this element
            // setting counter to 1 and jumping to next node because after this b-> next will se set as NULL
            counter = 1;
            tf = tf->next;
            // breacking the K elements of linked list
            b->next = NULL;

            Pair obj = reverse(f);
            if(nHead == NULL) {
                nHead = obj.head;
                nTail = obj.tail;
                // cout <<"first time" << obj.head -> data  << "--->" << obj.tail-> data << endl;
            }
            else
            {
                // connecting the first reversed linked list to another
                nTail->next = obj.head;
                nTail = obj.tail;
                // cout << "next times"<< obj.head -> data  << "--->" << obj.tail-> data << endl;

            }
            f = tf;
            b = NULL;
        }

        if(tf && tf->next != NULL) {
            tf = tf->next;
            counter++;
        }
    }

    return nHead;
}

int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput(); // this will take input until user enters -1
        cin >> k;
        head = kReverse(head, k);
        printList(head);
    }
    return 0;
}