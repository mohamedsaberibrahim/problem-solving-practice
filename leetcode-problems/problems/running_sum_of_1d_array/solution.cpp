class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            nums[i] += currentSum;
            currentSum += temp;
        }

        return nums;
    }
};