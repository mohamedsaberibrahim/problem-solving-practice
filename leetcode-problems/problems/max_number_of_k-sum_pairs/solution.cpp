class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int i = 0, j = nums.size() - 1;
        int ans = 0;
        while (i < j) {
          const int s = nums[i] + nums[j];
          if (s == k) {
            ++ans;
            ++i; --j;
          } else if (s < k) {
            ++i;
          } else {
            --j;
          }
        }
        return ans;
    }
};