class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int, int> occurence; 
        // insert elements in random order 
        for(int i =0; i<nums.size();i++){
            int complement = target - nums[i];
            //cout<< complement<< endl;
            if(occurence.count(complement)>0){
                //cout<<occurence.find(complement)->second<< " "<< i<<endl;
                return vector<int>{(occurence.find(complement)->second), i};
            }
            occurence.insert(pair<int, int>(nums[i], i));
            //cout<<"Inserted: "<< nums[i]<<" "<< i<<endl;
        }
        return vector<int>();
    }
};