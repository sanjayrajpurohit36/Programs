/* 
    Find the middle node of the linkedlist
    Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/


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
    /*
        Approach: Solved this problem using 2 pointer approach in which 
        one pointer (fast) jumps 2 nodes at a time and the other one (slow) jumps one
        at a time, so when the fast pointer reached to the end of the list, the slow one will
        reach at the middle node of the list.
    */
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head, *slow = head;
        while(fast != NULL) {
            if(fast -> next != NULL) {
                fast =  fast -> next -> next;
                slow = slow -> next;
            } 
            else {
                fast= fast->next;
            }
        }
        return back;
    }
}; 