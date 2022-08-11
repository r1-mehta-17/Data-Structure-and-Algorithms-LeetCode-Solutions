/*
You are given the head of a linked list containing unique integer values and an integer array nums that is a subset of the linked list values.
Return the number of connected components in nums where two values are connected if they appear consecutively in the linked list.
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
    int numComponents(ListNode* head, vector<int>& nums) {
        int ans = 0;
        bool flag = false;
        int i=0;
        map<int,int> map1;
        for(int i=0;i<nums.size();i++) {
            map1[nums[i]]++;
        }
        while(head!=NULL) {
            if(map1[head->val]>0) {
                flag = true;
            } else {
                if(flag == true) {
                    flag=false;
                    ans++;
                } 
            }
            head = head->next;
        }
        if(flag==true && head==NULL) ans++;
        return ans;
    }
};

/*
SAMPLE INPUT :
[0,1,2,3]
[0,1,3]
[0,1,2,3,4]
[0,3,1,4]
SAMPLE OUTPUT :
2
2
*/
