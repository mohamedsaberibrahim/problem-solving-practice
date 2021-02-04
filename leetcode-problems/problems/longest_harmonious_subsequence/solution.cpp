class Solution {
public:
    int findLHS(vector<int>& nums) {
        int result = 0;
        map<int, int>frequencies;
        
        for(int num: nums) {
            if(frequencies[num])
                frequencies[num]++;
            else
                frequencies[num] = 1;
            
            if(frequencies[num+1])
                result = max(result, frequencies[num] + frequencies[num+1]);
                
            if(frequencies[num-1])
                result = max(result, frequencies[num] + frequencies[num-1]);
        }
        return result;
    }
};