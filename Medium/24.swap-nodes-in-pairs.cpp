/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        // As we need atleast two nodes to swap 
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr && curr->next){
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = curr;

            curr = curr->next;
            prev = prev->next->next;
        }
        return dummy->next;
    }
};
// @lc code=end

