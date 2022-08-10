/*
Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 0;
        vector<int> arr;
        ListNode * curr = head;
        while(count<left-1 && curr!=NULL){
            count++;   
            curr=curr->next;
        }
        while(count<right && curr!=NULL) {
            count++;
            arr.push_back(curr->val);
            curr = curr->next;
        }
        reverse(arr.begin(),arr.end());
        count = 0;
        curr = head;
        while(count<left-1 && curr!=NULL){
            count++;   
            curr=curr->next;
        }
        int i=0;
        while(count<right && curr!=NULL) {
            count++;
            curr->val = arr[i];
            curr = curr->next;
            i++;
        }
        return head;
    }
};

/*
SAMPLE INPUT : 
[1,2,3,4,5]
2
4
[5]
1
1
SAMPLE OUTPUT :
[1,4,3,2,5]
[5]
*/
