/*
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).
*/

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:

    struct node *reverse (struct node *head, int k)
    { 
        int count = 0;
        struct node * prev = NULL, * curr = head, * nextn = NULL;
        while(curr!=NULL&&count < k) {
            nextn = curr->next;
            curr->next = prev;
            prev = curr; 
            curr = nextn;
            count++;
        }
        if(nextn!=NULL) {
            head->next = reverse(nextn,k);
        }
        return prev;
    }
};
/*
SAMPLE INPUT :
8
1 2 2 4 5 6 7 8
4
SAMPLE OUTPUT :
4 2 2 1 8 7 6 5
*/
