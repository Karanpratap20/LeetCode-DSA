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
    ListNode reverseList(ListNode head) {
        ListNode current=null;
        while(head!=null){
            ListNode next=head.next;
            head.next=current;
            current=head;
            head=next;
        }
        return current;
    }

    public int pairSum(ListNode head) {
        ListNode temp=head;
        ListNode slow=head;
        ListNode fast=head;

        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        int maxi=0;
        ListNode temp1=reverseList(slow);
        while(temp1!=null){
            int sum=temp1.val + temp.val;
            maxi=Math.max(maxi,sum);
            temp=temp.next;
            temp1=temp1.next;
        }
        return maxi;
    }
}