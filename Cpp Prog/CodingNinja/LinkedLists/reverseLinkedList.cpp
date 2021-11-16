/* 
    WAP to reverse a LinkedList
    Problem Link: https://leetcode.com/problems/reverse-linked-list/
    To check this code test it on Leetcode
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) 
            return head;
        else {
            ListNode *first = head, *second = head-> next;
            ListNode *TMP = NULL;    
            while(second!=NULL) {
                first->next = TMP;
                TMP = first;
                first = second;
                second = second->next;
            }
            first->next = TMP;
            head = first;
        }
        return head;
    }
};