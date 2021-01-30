class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        // Store all array elements 
    // in sorted order 
    set<int> s; 
  
    for (int i = 0; i < nums.size(); i++) { 
  
        if (nums[i] % 2 == 0) 
            s.insert(nums[i]); 
  
        // Odd number are transformed 
        // using 2nd operation 
        else
            s.insert(2 * nums[i]); 
    } 
  
    // (Maximum - Minimum) 
    int diff = *s.rbegin() - *s.begin(); 
  
    // Check if the size of set is > 0 and 
    // the maximum element is divisible by 2 
    while ((int)s.size() 
           && *s.rbegin() % 2 == 0) { 
  
        // Maximum element of the set 
        int maxEl = *s.rbegin(); 
  
        // Erase the maximum element 
        s.erase(maxEl); 
  
        // Using operation 1 
        s.insert(maxEl / 2); 
  
        // (Maximum - Minimum) 
        diff = min(diff, *s.rbegin() - *s.begin()); 
    } 
  
    // Print the Minimum 
    // Deviation Obtained 
        return diff;
    }
};