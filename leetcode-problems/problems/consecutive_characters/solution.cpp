class Solution {
public:
    int maxPower(string s) {
        int maxPower = 1;
        int curr = 1;
        for(int i = 0; i <s.length()-1; i++){
            if(s[i] == s[i+1]){
                curr++;
            }
            else{
                curr = 1;
            }
            if(curr > maxPower){
                maxPower = curr;
            }
        }
        return maxPower;
    }
};