#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;
        
        for (int i = 0; i < s.length(); i++){
            maps[s[i]]++;
            mapt[t[i]]++;
        }
        
        if (s.length() != t.length()) return false;
        
        for (auto item : maps){
            if (item.second != mapt[item.first]) return false;
        }

        return true;
    }
};