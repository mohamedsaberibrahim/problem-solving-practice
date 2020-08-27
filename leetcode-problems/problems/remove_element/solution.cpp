class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int afterDeletion = 0;
        int itr = 0;
        while(itr != nums.size())
        {
            if((nums[afterDeletion] == val) && (nums[itr] != val))
            {
                swap(&nums[afterDeletion++], &nums[itr]);
            }
            else if(nums[afterDeletion] != val){
                afterDeletion++;
            }
            itr++;
            
        }
        
        return afterDeletion;
    }
    
    void swap(int* num1, int* num2)
    {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        return;
    }
};