class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> freqOfChars;
        for(int i =0; i<s.length(); i++){
            if(freqOfChars.count(s[i]) == 0){
                freqOfChars.insert(pair<char, int>(s[i], 1));
            }
            else{
                freqOfChars[s[i]]++;
            }
        }
        for(int i =0; i<s.length(); i++){
            if(freqOfChars[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};