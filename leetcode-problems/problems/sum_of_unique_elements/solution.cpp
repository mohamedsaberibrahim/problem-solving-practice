class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        map<int, int>freq;
        
        for(int i = 0; i < nums.size(); i++) {
            if(freq[nums[i]])
                freq[nums[i]] += 1;
            else
                freq[nums[i]] = 1;
        }
        
        for (map<int, int>::iterator it = freq.begin(); it != freq.end(); it++)
        {
            if(it->second == 1)
                sum += it->first;
        }
        return sum;
    }
};