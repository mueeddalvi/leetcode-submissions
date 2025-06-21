class Solution {
    public boolean rotateString(String s, String goal) {
        int len=s.length();
        for(int i=0;i<len;i++){
            s=s.substring(1)+s.charAt(0);
            System.out.println(s);
            if(s.equals(goal))
                return true;
        }
        return false;
        
    }
}
