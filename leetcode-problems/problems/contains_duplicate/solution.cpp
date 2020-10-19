class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0) return false;
        std::set<int>nums_unique;
        for(int i: nums){
            nums_unique.insert(i);
        }
        if(nums_unique.size() != nums.size())
            return true;
        return false;
    }
};