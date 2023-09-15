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
    public ListNode removeNodes(ListNode head) {
        head=reverseList(head);
        ListNode temp=head;
        int maxi=temp.val;
        while(temp.next!=null){
            if(maxi>temp.next.val){
                ListNode ptr=temp.next;
                temp.next=ptr.next;
            }
            else{
                maxi=temp.next.val;
                temp=temp.next;
            }
        }
        head=reverseList(head);

        return head;
    }
}