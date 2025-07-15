class Solution {
public:
    bool isValid(string word) {
        regex pattern("(?=.*[b-df-hj-np-tv-z])(?=.*[aeiou])[a-z0-9]{3,}",regex_constants::icase);

        return regex_match(word, pattern);
    }
};