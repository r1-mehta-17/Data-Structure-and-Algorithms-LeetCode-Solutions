// Given the head of a singly linked list, return true if it is a palindrome.

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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL) {
            count++;
            temp = temp->next;
        } 
        temp = head;
        int mid = 0;
        bool odd = false;
        if(count % 2==0) {
            mid = count/2;
            odd = false;
        } else {
            mid = (count/2) +1;
            odd=true;
        }
        count = 1;
        while(temp!=NULL) {
            if(odd == true && count == mid) {
                count++;
                temp=temp->next;
                continue;
            }
            if(count > mid) {
                if(s.top()==temp->val) s.pop();
                else return false;
            } else {
                s.push(temp->val);
            }
            temp=temp->next;
            count++;
        }
        return true;
    }
};

/*
SAMPLE INPUT : 
[1,2,2,1]
[1,2]
SAMPLE OUTPUT :
true
false
*/
