class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // swapping two vectors if nums1 < nums2 to let num2 is the smaller always
        if(nums1.size() < nums2.size()){
            nums1.swap(nums2); 
        }
        map<int, int>freqOfNums1;
        for(int i =0; i< nums1.size(); i++){
            if(freqOfNums1.count(nums1[i]) == 0){
                freqOfNums1.insert(pair<int,int>(nums1[i], 1));
            }
            else{
                freqOfNums1[nums1[i]]++;
            }
        }
        vector<int>result;
        for(int i=0; i < nums2.size(); i++){
            if((freqOfNums1.count(nums2[i]) != 0)&&(freqOfNums1[nums2[i]])){
                result.push_back(nums2[i]);
                freqOfNums1[nums2[i]]--;
            }
        }
        return result;
    }
};