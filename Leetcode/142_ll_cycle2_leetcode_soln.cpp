/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.
Do not modify the linked list.
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
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode *> list;
        bool repeat=false;
        while(head!=NULL) {
            list.push_back(head);
            head=head->next;
            for(int i=0;i<list.size();i++) {
                if(head == list[i]){
                    repeat = true;
                }
            }
            if(repeat == true){
                break;
            }
        }
        return head;
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
tail connects to node index 1
tail connects to node index 0
no cycle
*/
