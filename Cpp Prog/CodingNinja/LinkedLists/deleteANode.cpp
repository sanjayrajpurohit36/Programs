/* 
    You have been given a linked list of integers. 
    Your task is to write a function that deletes a node from a given position, 'POS'.
    
    Note :
    Assume that the Indexing for the linked list always starts from 0.
    If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.

*/

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node *ptr = NULL, *delNode = NULL, *end = NULL;
    if(head == NULL) return head;
	if(pos == 0) {
        delNode = head;
        head = head->next;
        return head;
    } else {
    	int i = 0;
        ptr = head;
        while(i < pos - 1 && ptr != NULL) {
            ptr = ptr->next;
            i++;
        }
        
        if(ptr != NULL && ptr -> next != NULL) {    
        	delNode = ptr->next;
            end = delNode ->next;
            ptr -> next = end;
            
        }
    }
    delete delNode;
    return head;
}
