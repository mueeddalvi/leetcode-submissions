class Solution {
    List<List<Integer>> res;
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        res=new ArrayList<>();
        Arrays.sort(candidates);
        solve(0, candidates, target, new ArrayList<Integer>());
        return res;
        
    }

    public void solve(int index, int[] candidates, int target, List<Integer> curr){
        if(target==0){
            res.add(new ArrayList<Integer>(curr));
            return;
        }
        else{
            for(int i=index;i<candidates.length;i++){
                if(i>index && candidates[i]==candidates[i-1])
                    continue;
                if(candidates[i]>target)
                    break;
                curr.add(candidates[i]);
                solve(i+1,candidates, target-candidates[i], curr);
                curr.remove(curr.size()-1);                
            }
        }
    }
}
