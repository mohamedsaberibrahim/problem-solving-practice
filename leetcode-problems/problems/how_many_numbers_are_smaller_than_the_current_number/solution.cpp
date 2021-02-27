class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> numsMap = vectorToMap(nums);
        vector<int> numsSmaller(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            map<int, int>::iterator itr;
            for(itr = numsMap.begin(); itr != numsMap.end(); itr++)
            {
                if(itr->first < nums[i]){
                    numsSmaller[i]+= itr->second;
                }
                else {
                    break;
                }
            }
        }
        return numsSmaller;
    }
    
    map<int, int> vectorToMap(vector<int>& nums) {
        map<int, int> mappedValues;
        
        for(int i = 0; i < nums.size(); i++) {
            if(mappedValues[nums[i]])
                mappedValues[nums[i]]++;
            else
                mappedValues[nums[i]] = 1;
        }
        return mappedValues;
    }
};