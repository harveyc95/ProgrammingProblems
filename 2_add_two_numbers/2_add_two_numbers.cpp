/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// m = length(l1), n = length(l2)
// time complexity O(max(m,n))
// space complexity O(max(m,n) + 1)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ansNode = NULL, *prev = NULL;
        int carry = 0;
        
        if (!l1) return l2;
        if (!l2) return l1;
        
        while(l1 || l2) {
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            int tmp = v1 + v2 + carry;
            int val = tmp % 10;
            carry = tmp / 10;
            ListNode *curr = new ListNode(val);
            if (ansNode == NULL)
                ansNode = curr;
            if (prev)
                prev->next = curr;
            prev = curr;
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        if (carry) {
            ListNode *l = new ListNode(carry);
            prev->next = l;
        }
        return ansNode;
    }
};