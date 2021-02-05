class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(nums.size());
        int x = 0;
        int y = n;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
            {
                shuffled[i] = nums[x++];
            }
            else
            {
                shuffled[i] = nums[y++];
            }
        }
        
        return shuffled;
    }
};