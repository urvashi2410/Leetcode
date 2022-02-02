/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l = new ListNode(0);
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* p = l;
        int carry = 0;

        while(p1 != NULL || p2 != NULL){
            int sum = carry;
            if(p1 != NULL){
                sum += p1->val;
                p1 = p1->next;
            }

            if(p2 != NULL){
                sum += p2->val;
                p2 = p2->next;
            }

            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }

            ListNode* newNode = new ListNode(sum);
            p->next = newNode;
            p = p->next;
        }

        if(carry > 0){
            ListNode* newNode = new ListNode(carry);
            p->next = newNode;
        }
        return l->next;
    }
};
// @lc code=end

