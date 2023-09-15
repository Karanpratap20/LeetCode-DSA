/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode temp=list1;
        ListNode add=list2;
        int x=b-a;
        for(int i=0;i<a-1;i++){
            temp=temp.next;
        }
        ListNode temp1=temp.next;
        while(x!=0){
          temp1=temp1.next;
          x-=1;
        }
        temp.next=list2;
        while(add.next!=null){
          add=add.next;
        }
        add.next=temp1.next;

        return list1;
    }
}