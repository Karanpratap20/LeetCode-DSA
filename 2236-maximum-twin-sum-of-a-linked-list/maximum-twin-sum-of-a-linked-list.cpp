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
    ListNode* reverseList(ListNode* head) {
        ListNode* current=NULL;
        while(head!=NULL){
            ListNode* next=head->next;
            head->next=current;
            current=head;
            head=next;
        }
        return current;
    }
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        int maxi=0;
        ListNode *temp1 = reverseList(slow);
        while(temp1){
            maxi= max(maxi,temp1->val + temp->val);
            temp1=temp1->next;
            temp=temp->next;
        }
        return maxi;
    }
};