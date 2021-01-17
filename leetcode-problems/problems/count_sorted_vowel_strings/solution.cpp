class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> dp(5, 1);

        for (int i = 2; i <= n; ++i) {
          vector<int> newDp(5);
          for (int j = 0; j < 5; ++j)
            for (int k = 0; k <= j; ++k)
              newDp[j] += dp[k];
          dp = move(newDp);
        }

        return accumulate(begin(dp), end(dp), 0);
        
    }
    
};