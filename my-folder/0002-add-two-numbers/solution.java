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
    List<Integer> res=new ArrayList<>();
    int carry=0;
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        while(l1!=null && l2!=null){
            int input=l1.val+l2.val+carry;
            if(input>9){
                carry=1;
            }
            else{
                carry=0;
            }
            res.add(input%10);
            System.out.print(l1.val+" + "+l2.val+"\n");
            l1=l1.next;
            l2=l2.next;
        }
        System.out.println();
        while(l1!=null){
            int input=l1.val;
            if(carry>0){
                input+=carry;
            }
            if(input>9){
                carry=1;
            }
            else{
                carry=0;
            }
            res.add(input%10);
            l1=l1.next;
        }
        while(l2!=null){
            int input=l2.val;
            if(carry>0){
                input+=carry;
            }
            if(input>9){
                carry=1;
            }
            else{
                carry=0;
            }
            l2=l2.next;
            res.add(input%10);
        }
        if(carry==1){
            res.add(1);
        }
        //708 ==> 807
        ListNode temp=new ListNode();
        ListNode start=new ListNode();
        start=temp;
        for(int i=0;i<res.size();i++){
            System.out.print(res.get(i)+" ");
            temp.val=res.get(i);
            if(i!=res.size()-1){
                temp.next=new ListNode();
                temp=temp.next;
            }
        }
        return start;
    }
}

/*
[9,9,9,9,9,9,9]
      [9,9,9,9]
           ,9,8  
 */
