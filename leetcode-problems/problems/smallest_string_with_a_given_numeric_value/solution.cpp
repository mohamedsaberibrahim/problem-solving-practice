class Solution {
public:
    string getSmallestString(int n, int k) {
        string smallestString = "";
        for(int i = n - 1; i >= 0; i--) {
            int diff = k - i;
            // cout << i << " ->> current K: " << k << " -> current diff: " << diff << endl;
            if(diff >= 26) {
                int z_times = diff / 26;
                
                smallestString = string(z_times, 'z') + smallestString;
                // cout << smallestString << endl;
                k = k - 26 * z_times;
                i -= z_times - 1;
                // k = k + 1;
            } 
            else if (diff == 1) {
                int a_times = k;
                
                smallestString = string(a_times, 'a') + smallestString;
                k = 0;
                break;
            }
            else {
                char newChar = 'a' + diff - 1;
                // cout << diff << " -> " << newChar << endl;
                smallestString = newChar + smallestString;
                k = k - diff;
            }
        }
        return smallestString;
    }
};