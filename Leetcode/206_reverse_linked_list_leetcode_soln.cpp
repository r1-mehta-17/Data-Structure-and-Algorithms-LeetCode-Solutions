/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/
/*
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *Previous_Node=NULL,*Current_Node=head,*Next_Node=NULL;
        
        while(Current_Node != NULL)
        {
            Next_Node = Current_Node->next;
            Current_Node->next = Previous_Node;
            Previous_Node = Current_Node;
            Current_Node = Next_Node;
        }
        head = Previous_Node;
        
        return head;
    }
};

/*
SAMPLE INPUT : 
[1,2,3,4,5]
SAMPLE OUTPUT : 
[5,4,3,2,1]
*/
