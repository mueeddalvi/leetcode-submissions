/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode l3 = new ListNode(0);
        ListNode p= l1;
        ListNode q=l2;
        ListNode r=l3;
        int carry=0;
        
        if(l1==null)
        {
            return l2;
        }
        
         if(l2==null)
        {
            return l1;
        }
        
        while(p!=null||q!=null)
        {
                        
           int s1=(p!=null) ? p.val:0;
            int s2=(q!=null) ? q.val:0;
            System.out.println(s1+"  "+s2);
           int sum=s1+s2+carry;
            carry=sum/10;
             System.out.println(sum);
           r.next=new ListNode(sum%10);
           r=r.next;
            
            if(p!=null)
                p=p.next;
            if(q!=null)
                q=q.next;
           
        }
        
        if(carry>0)
        {
            r.next=new ListNode(carry);
        }
        
        return l3.next;
        
        
    }
}
