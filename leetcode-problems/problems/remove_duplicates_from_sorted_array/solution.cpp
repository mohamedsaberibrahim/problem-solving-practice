class Solution {
public:
    void swap(int &int1, int &int2){
        int temp = int1;
        int1 = int2;
        int2 = temp;
        return;
    }
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int fast_ptr = 1;
        int slow_ptr = 0;
        while(fast_ptr < nums.size()){
            if(nums[fast_ptr] == nums[slow_ptr]){
                fast_ptr++;
                continue;
            }
            if(nums[slow_ptr] < nums[fast_ptr]){
                slow_ptr++;
                swap(nums[slow_ptr], nums[fast_ptr]);
            }
            fast_ptr++;
        }
        return slow_ptr +1;
    }
};