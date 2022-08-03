/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode * cur = new ListNode();
        ListNode * nn = new ListNode();
        cur = head;
        nn = head->next;
        while(nn!=NULL){
            if(nn->val == cur->val) {
                cur->next = nn->next;
                nn = nn->next;
                continue;
            }
            cur = nn;
            nn = nn->next;
        }
        return head;
    }
};

/*
SAMPLE INPUT : 
[1,1,2]
[1,1,2,3,3]
SAMPLE OUTPUT :
[1,2]
[1,2,3]
*/
