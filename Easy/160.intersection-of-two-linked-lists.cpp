/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL  || headB == NULL){
            return NULL;
        }

        int len1 = 0;
        int len2 = 0;
        ListNode* Node1 = headA;
        ListNode* Node2 = headB;

        while(Node1 != NULL){
            len1++;
            Node1 = Node1->next;
        }

        while(Node2 != NULL){
            len2++;
            Node2 = Node2->next;
        }

        int diff = 0;
        Node1 = headA;
        Node2 = headB;
        if(len1 > len2){
            diff = len1 - len2;
            for(int i = 0; i < diff; i++){
                Node1 = Node1->next;
            }
        }
        else{
            diff = len2 - len1;
            for(int i = 0; i < diff; i++){
                Node2 = Node2->next;
            }
        }

        while(Node1 != NULL && Node2 != NULL){
            if(Node1 == Node2){
                return Node1;
            }
            Node1 = Node1->next;
            Node2 = Node2->next;
        }
        return NULL;
    }
};
// @lc code=end

