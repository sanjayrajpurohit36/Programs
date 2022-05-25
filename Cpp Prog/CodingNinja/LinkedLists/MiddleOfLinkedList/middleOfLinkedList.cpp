/*
    Write a program to find the middle of the linked list
*/

Node *midPoint(Node *head)
{
    // Write your code here
    if(head == NULL) return head;
    Node *fast = head , *slow = head;
    while(fast -> next != NULL && fast -> next -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}


/* 
    Solution Explanation: 
    There are two cases in this question.
    1. if the elements are odd then middle element is clearly identified.
        Eg 1 -> 2 -> 3 -> 4 -> 5 -> X
        Middle : 3
    2 if the elements are even in that case middle element is the last element of the first half  
        Eg 1 -> 2 -> 3 -> 4 -> X
        Middle: 2
    So, to solve this problem we have used the two pointer Node *fast & Node *slow approach which means
    fast jumps two nodes while slow jumps only one
    
    Imp:
        For first case when fast -> next == NULL then the slow one will be at the middle node
        For second case when fast -> next -> next == NULL then the slow one will be at the middle
        using these two conditions we have created this program
*/