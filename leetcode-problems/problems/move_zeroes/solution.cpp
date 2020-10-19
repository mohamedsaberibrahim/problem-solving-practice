class Solution {
public:
    void swap(int& num1, int& num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
        return;
    }
    void moveZeroes(vector<int>& nums){
        int fast_ptr = 0;
        int slow_ptr = 0;
        while(fast_ptr < nums.size()){
            if(nums[fast_ptr] != 0){
                swap(nums[fast_ptr], nums[slow_ptr++]);
            }
            fast_ptr++;
        }
    }
};