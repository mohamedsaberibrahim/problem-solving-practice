class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n <= 1) return n;
        else {
            
            int* memo = new int[101];
            
            memo = getGeneratedArray(n, memo);
            
            // for(int i = 0; i < n + 1; i++) {
            //    cout << i << " "<< memo[i] << endl;
            // }
            int max = getMax(n, memo);
            return max;
            
        }
        
    }
    int* getGeneratedArray(int n, int* memo) {
        memo[0] = 0;
        memo[1] = 1;

        for (int i = 1; i < (n + 1)/2; i++) {
            memo[2 * i] = memo[i];
            memo[2 * i + 1] = memo[i] + memo[i + 1];
        }
        return memo;
    }
    
    int getMax(int n, int* memo) {
        int max = memo[0];

        for (int i = 1; i < (n + 1); i++) {
            if(max < memo[i]) {
                max = memo[i];
            }
        }
        return max;
    }
};