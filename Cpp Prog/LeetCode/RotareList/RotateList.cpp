/* 

    61. Rotate List 
    Problem : https://leetcode.com/problems/rotate-list/

*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = getLength(head); 
        cout << len;
        if(k == 0  || head == NULL || k % len == 0) return head;
        else if(k <= len) 
            return appendNAhead(head, k, len);
        else {
            int rem = k % len;     
            return appendNAhead(head, rem, len);
        }
    }
    
    int getLength(ListNode *head) {
        int len = 0;
        ListNode *itr = head;
        while(itr != NULL) {
            itr = itr-> next;
            len++;
        }
        return len;
    }
    
    ListNode *appendNAhead(ListNode *head, int k, int len) {
        ListNode *ptr = head, *itr = head;
        int i = 0;
        while(itr != NULL) {


            if(i == len - k - 1) {
                head = itr -> next;
                itr -> next = NULL;      
                itr = head;
            }

            if(itr -> next == NULL) {
                itr -> next = ptr;
                break;
            }

            itr = itr -> next; // jump to next node
            i++; // increment i
        }
        return head;
    }
};