class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        
        List<List<Integer>> result=new ArrayList<>();
        
        Arrays.sort(candidates);
        
         recur(candidates,0,target,new ArrayList<Integer>(),result);
         
        return result;
    }
    
    public void recur(int candidates [],int index, int target, ArrayList<Integer> curr,List<List<Integer>> result)
    {
        if(target==0)
        {
            result.add(new ArrayList<>(curr));
            return;
        }
        
        for(int i=index;i<candidates.length;i++)
        {
            if(candidates[i]>target)
                break;
            
            curr.add(candidates[i]);
            recur(candidates,i,target-candidates[i],curr,result);
            curr.remove(curr.size()-1);
        }
        
    }
}
