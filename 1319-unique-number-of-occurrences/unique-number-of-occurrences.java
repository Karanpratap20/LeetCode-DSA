class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer,Integer> mp=new HashMap();
        for(int it:arr){
            mp.put(it, mp.getOrDefault(it, 0) + 1);
        }

        Set<Integer> set=new HashSet();

        for(int it:mp.values()){
            set.add(it);
        }

        return mp.size()==set.size();
    }
}