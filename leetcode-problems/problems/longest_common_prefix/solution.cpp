class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string LargestString = getLargestString(strs);
        int i = 0;
        while(checkCharAt(strs, i, LargestString[i]) && i < LargestString.size()){
            i++;   
        }
        return LargestString.substr(0, i);
    }
    
    bool checkCharAt(vector<string>& strs, int idx, char c){
        for(string& s : strs){
            if(s.size() <= idx || s[idx] != c){
                return false;
            }
        }
        return true;
    }
    
   
    string getLargestString(vector<string>& strs){
        string max;
        for(string& s : strs){
            if(s.size() > max.size()){
                max = s;
            }
        }
        return max;
    }
};