class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        int length=strs.length;

        Map<String,List<String>> map=new HashMap<>();

        for(String str:strs){
            char charArray []= str.toCharArray();
            Arrays.sort(charArray);
            String s=Arrays.toString(charArray);
            if(map.get(s)!=null){
                map.get(s).add(str);
            }
            else{
                map.put(s,new ArrayList<String>());
                map.get(s).add(str);
            }
        }

        List<List<String>> res= new ArrayList<>();
        for(Map.Entry<String, List<String>> entry : map.entrySet()){
            res.add(entry.getValue());
        }

        return res;
        
    }
}
