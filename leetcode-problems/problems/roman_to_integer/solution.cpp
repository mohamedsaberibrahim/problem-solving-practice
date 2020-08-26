class Solution {
public:
    int romanToInt(string s) {
        
        
        
        map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10}, 
        {'L', 50},
        {'C', 100}, 
        {'D', 500},
        {'M', 1000},
        };
        
        int prev = roman.find(s[0]) -> second;
        int result = 0;
        
        for (int i = 1; i < s.length(); i++) 
        {
            int next = roman.find(s[i]) -> second;
            if (prev < next) {
                result -= prev;
            } else {
                result += prev;
            }
             prev = next;
        }
        
        result += prev;
        
        return result;
    }
};