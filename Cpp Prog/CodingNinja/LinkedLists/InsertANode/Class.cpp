#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        cout << "default constructor";
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void printList(Node *head) {
    Node *temp = head;
    if(temp == NULL)
        return;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}