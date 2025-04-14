class Solution {
    public int maxProfit(int[] prices) {

        int cp=prices[0];
        int sp=-1;
        int ci=0;
        int si=-1;
        int profit=0;

        for(int i=1;i<prices.length;i++){
          if(cp>prices[i]){
            cp=prices[i];
          }
          else{
            profit=Math.max(profit,prices[i]-cp);
          }
        }
        
        return profit;
        
    }
}
