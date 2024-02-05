class Solution {
    public char repeatedCharacter(String s) {
        HashMap<Character,Integer> mp=new HashMap<>();

        for (int i = 0; i < s.length(); i++){
            char it=s.charAt(i);
            if(mp.containsKey(it)){
                return it;
            }
            else{
                mp.put(it, mp.getOrDefault(it, 0) + 1);
            }
        }

        return ' ';
    }
}