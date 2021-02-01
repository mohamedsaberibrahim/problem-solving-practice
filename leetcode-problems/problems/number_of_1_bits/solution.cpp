class Solution {
public:
    int hammingWeight(uint32_t n) {
        string bin = decimalToBinary(n);
        return countOnes(bin);
    }
    string decimalToBinary(uint32_t n) {
        string result = "";
        for(int i = 0; n > 0 ; i++)    
        {    
            result += to_string(n%2);    
            n = n/2;  
        }    
        return result;
    }
    int countOnes(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') 
                count++;
        }
        return count;
    }
};