/*
    For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.
 Note :
    Assume that the Indexing for the singly linked list always starts from 0.

If the given position 'i',  is greater than the length of the given singly linked list, then don't print anything.

Input format :
    The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
    The first line of each test case or query contains the elements of the singly linked list separated by a single space.
    The second line contains the value of 'i'. It denotes the position in the given singly linked list.

    For each test case, print the node data at the 'i-th' position of the linked list(if exists).
Output:
    Output for every test case will be printed in a seperate line.

*/
#include<iostream>
#include "Class.cpp"
using namespace std;

void printIthNode(Node *head, int i)
{
    // Write your code here
    Node *temp = head;
    Node *ptr = head;
    bool isFound;
    int ans = 0, nodeIndex = 0, length = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
        if (length == i)
        {
            ptr = temp;
            isFound = true;
        }
    }
    isFound &&cout << ptr->data;
}


int main()
{
	int t;
	cin >> t;
    while (t--)
    {
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}