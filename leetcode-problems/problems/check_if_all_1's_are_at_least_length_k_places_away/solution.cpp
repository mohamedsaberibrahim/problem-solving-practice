class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int currentOneIndex = getFirstOneIndex(nums);


        
        for (int i = currentOneIndex + 1; i < nums.size(); i++) {
           if(nums[i] == 1) {
             if(i - currentOneIndex - 1 < k) {
                 return false;
             }
             else {
                 currentOneIndex = i;
             }
           }
        }
        
        return true;
    }
    int getFirstOneIndex(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1)
                return i;
        }
        return -1;
    }
};