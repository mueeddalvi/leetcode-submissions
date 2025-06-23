class Solution {
    static List<String> res;
    String arr[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public List<String> letterCombinations(String digits) {
    
        res=new ArrayList<>();
        int l=digits.length();
        if(l==0){
            return res;
        }
        // else if(l==1){
        //     res.add(arr[digits.charAt(0)-'0'].toCharArray());
        //     return res;
        // }
        else{
         recur("",digits);
         return res;
        }
    }

    void recur(String comb,String digits){
        if(digits.length()==0){
            res.add(comb);
        }else{
            String letters=arr[digits.charAt(0)-'0'];
            for(int j=0;j<letters.length();j++){
                recur(comb+letters.charAt(j),digits.substring(1));
            }
        }
    }
}
