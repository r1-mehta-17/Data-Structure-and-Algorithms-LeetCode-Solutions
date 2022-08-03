/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> arr;
        while(head!=NULL) {
            arr.push_back(head);
            for(int i=0;i<arr.size();i++){
                if(head->next == arr[i]) {
                    return true;
                }
            }
            head=head->next;
        }
        return false;
    }
};

// ANOTHER FASTER APPROACH TO SOLVE THE PROBLEM :
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;
    }
};

/*
SAMPLE INPUT :
[3,2,0,-4]
1
[1,2]
0
[1]
-1
SAMPLE OUTPUT : 
true
true
false
*/
