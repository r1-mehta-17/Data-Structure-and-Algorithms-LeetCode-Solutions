/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode * prev = new ListNode();
        ListNode * curr = new ListNode();
        prev = head;
        curr = head;
        int count = 0;
        while(curr!=NULL) {
            if(curr->val == val) {
                prev->next = curr->next;
                curr=curr->next;
                continue;
            }
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(head->val == val) head = head->next;
        return head;
    }
};

/*
SAMPLE INPUT :
[1,2,6,3,4,5,6]
6
[]
1
[7,7,7,7]
7
SAMPLE OUTPUT :
[1,2,3,4,5]
[]
[]
*/
