class Solution {
    public String minWindow(String s, String t) {

        if (s.length() < t.length()) {
            return "";
        }
        HashMap<Character, Integer> map = new HashMap<>();

        for (int k = 0; k < t.length(); k++) {
            map.put(t.charAt(k), map.getOrDefault(t.charAt(k), 0) + 1);
        }

        int min = Integer.MAX_VALUE;
        String minS = "-1";

        int count = 0;
        count = map.size();

        int i = 0, j = 0;
        while (j < s.length()) {
            char c =s.charAt(j);
            if (map.containsKey(c)) {
                map.put(c, map.get(c) - 1);
                if (map.get(c) == 0)
                    count--;
            }
            if (count > 0) {
                j++;
            } else {
                while (count == 0) {
                    char charLeft = s.charAt(i);
                    if (min > j - i + 1) {
                        minS = s.substring(i, j + 1);
                        min =  j - i + 1;
                    }
                    
                    if (map.containsKey(charLeft)) {
                        map.put(charLeft, map.get(charLeft) + 1);
                        if (map.get(charLeft) == 1)
                            count++;
                    }
                    i++;
                }
                j++;
            }

        }
        if (minS.equals("-1"))
            return minS = "";
        return minS;

    }
}
