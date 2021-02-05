class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int current_sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            int temp = current_sum + nums[i];
            nums[i] += current_sum;
            current_sum = temp;
        }
        return nums;
    }
};