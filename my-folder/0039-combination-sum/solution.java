class Solution {
    List<List<Integer>> res;
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        res=new ArrayList<>();
        int l =candidates.length;
        Arrays.sort(candidates);
        solve(0,candidates,target, new ArrayList<Integer>());

        return res;
    }

    void solve(int index, int[] candidates, int target, List<Integer> list){
         if(target==0){
            res.add(new ArrayList<>(list));
            return ;
        }
        else{
            for(int i=index;i<candidates.length;i++){
                if(candidates[i]>target)
                    break;
                list.add(candidates[i]);
                solve(i,candidates,target-candidates[i],list);
                list.remove(list.size()-1);
            }
        }

    }
}
