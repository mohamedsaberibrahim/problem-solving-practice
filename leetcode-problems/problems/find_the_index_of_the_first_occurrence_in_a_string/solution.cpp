class Solution {
public:
    bool isIdentical(string s1, string s2, int idx){
        int j = 0;
        for(int i =idx; i< idx+s1.length(); i++){
            if(s1[j] != s2[i]){
                return false;
            }
            j++;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        if(needle.length() == 0){
            return 0;
        }
        else if(haystack.length() == 0){
            return -1;
        }
        for(int i =0; i< haystack.length(); i++){
            if((haystack.length()-i)<needle.length()) return -1;
            if(isIdentical(needle, haystack, i))
                return i;
        }
        return -1;
    }
};