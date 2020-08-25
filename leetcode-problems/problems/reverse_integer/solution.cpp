class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while(x != 0)
        {
            int curr = x % 10;
            if ((result * 10 > INT_MAX) || (result * 10 < INT_MIN))
            {
                return 0;
            }
            result = (result * 10) + curr;
            x = x / 10;
        }
        return result;
    }
};