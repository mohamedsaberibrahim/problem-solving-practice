class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int unique = 0;
        int itr = 0;
        while(itr != nums.size())
        {
            if(nums[unique] < nums[itr])
            {
                swap(&nums[++unique], &nums[itr]);
            }
            
            itr++;
        }
        
        return ++unique;
    }
    void swap(int* num1, int* num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        return;
    }
};