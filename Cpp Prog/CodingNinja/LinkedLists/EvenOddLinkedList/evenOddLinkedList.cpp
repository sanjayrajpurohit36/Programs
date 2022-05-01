/*
    For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers.
    The relative order of the odd and even terms should remain unchanged.

    Input format:
        The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
        The first line of each test case or query contains the elements of the singly linked list separated by a single space.

    Constraints :
        1 <= t <= 10^2
        0 <= M <= 10^5
        Where M is the size of the singly linked list.

    Sample Input:
            1
            1 4 5 2 -1

    Output:
            1 5 4 2 
*/

ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode *oh = NULL, *ot = NULL, *eh = NULL, *et = NULL; 
        ListNode * itr = head;
        int counter = 1;
        while( itr!= NULL ) {
            if(counter % 2 != 0) {
                if(oh == NULL) {
                    oh = itr;
                    ot = itr;
                } else {
                    ot -> next = itr;
                    ot = itr;
                }
            } else {
                if(eh == NULL) {
                    eh = itr;
                    et = itr;
                } else {
                    et -> next = itr;
                    et = itr;
                }
            }
            itr = itr-> next;
            counter++;
        }
        if(oh == NULL || eh == NULL) return head;
        else {
            ot-> next = eh;
            et -> next = NULL;
            return oh;
        }
        
    }
};