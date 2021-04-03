class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(sum + nums[i] < nums[i]) {
                sum = nums[i];
            }
            else {
                sum += nums[i];
            }
            if(max < sum) {
                max = sum;
            }
        }
        
        return max;
    }
    
    
};
