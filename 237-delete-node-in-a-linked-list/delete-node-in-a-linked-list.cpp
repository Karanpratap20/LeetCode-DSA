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
    void deleteNode(ListNode* node) {
        auto ptr=node->next;
        swap(ptr->val,node->val);
        node->next=ptr->next;
        delete(ptr);
    }
};