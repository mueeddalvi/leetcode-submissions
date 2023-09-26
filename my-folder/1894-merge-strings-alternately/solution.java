class Solution {
    public String mergeAlternately(String word1, String word2) {
        String result="";

        int l1=word1.length();
        int l2=word2.length();

        int i=0,j=0;

        while(i<l1 && j<l2){
            result=result+word1.charAt(i++)+word2.charAt(j++);
        }

        while(i<l1){
            result=result+word1.charAt(i++);
        }
        while(j<l2){
            result=result+word2.charAt(j++);
        }
    
    return result;
    }
}
