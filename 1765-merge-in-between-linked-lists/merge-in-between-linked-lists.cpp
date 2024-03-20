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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* add=list2;
        int x=b-a;
        for(int i=0;i<a-1;i++){
            temp=temp->next;
        }
        ListNode* temp1=temp->next;
        while(x--){
          temp1=temp1->next;
        }
        temp->next=list2;
        while(add->next){
          add=add->next;
        }
        add->next=temp1->next;

        return list1;
    }
};