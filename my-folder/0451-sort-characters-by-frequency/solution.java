class Solution {
    public String frequencySort(String s) {
        int len=s.length();
        Map<Character,Integer> map=new HashMap<Character,Integer>();
        for(int i=0;i<len;i++){
            char c=s.charAt(i);
            if(map.containsKey(c)){
                map.put(c, map.get(c)+1);
            }
            else{
                map.put(c,1);
            }
        }
        System.out.println(map);

        List<Map.Entry<Character,Integer>> ls=new ArrayList<>(map.entrySet());
               

        Collections.sort(ls, new Comparator<Map.Entry<Character,Integer>>(){
            public int compare(Map.Entry<Character,Integer> e1,Map.Entry<Character,Integer>e2){
                if(e1.getValue()<e2.getValue()){
                    return 1;
                }
                else{
                    return -1;
                }
            }
        });
 System.out.println(ls);
        Map<Character,Integer> map2= new LinkedHashMap<>();
        for(Map.Entry<Character,Integer> es: ls){
            map2.put(es.getKey(),es.getValue());
        }

        System.out.println(map2);
        String res="";

        for(Map.Entry<Character,Integer> sortedMap: map2.entrySet()){
            for(int i=0;i<sortedMap.getValue();i++){
                res=res+sortedMap.getKey();            
            }
            if(sortedMap.getValue()==0){
                map2.remove(sortedMap.getKey());
            }
        }

        return res;

        
    }
}
