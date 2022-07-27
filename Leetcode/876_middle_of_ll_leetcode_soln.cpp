/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode * temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid = 0;
        while(mid<count/2){
            head=head->next;
            mid++;
        }
        return head;
    }
};
/*
SAMPLE INPUT :
[1,2,3,4,5]
[1,2,3,4,5,6]
SAMPLE OUTPUT :
[3,4,5]
[4,5,6]
*/
