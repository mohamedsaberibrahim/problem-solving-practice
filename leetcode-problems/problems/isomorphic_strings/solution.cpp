#include <map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        std:map<char, char> charactersMappingFromSToT;
        map<char, char> charactersMappingFromTtoS;


        for(int i = 0; i < s.length(); i++) {
            char currentS = s[i];
            char currentT = t[i];
            if (charactersMappingFromSToT[currentS]) {
                char cachedT = charactersMappingFromSToT[currentS];
                if (cachedT != t[i]) return false;
            }
            if (charactersMappingFromTtoS[currentT]) {
                char cachedS = charactersMappingFromTtoS[currentT];
                if (cachedS != s[i]) return false;
            }
            charactersMappingFromSToT[currentS] = t[i];
            charactersMappingFromTtoS[currentT] = s[i];
        }
        return true;
    }
};