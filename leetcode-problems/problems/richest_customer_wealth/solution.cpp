class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richestTillNow = 0;
        
        for(vector<int> account: accounts) {
            int sum = 0;
            for(int i = 0; i < account.size(); i++) {
                sum += account[i];
            }
            
            if(richestTillNow < sum)
                richestTillNow = sum;
        }
        return richestTillNow;
    }
};