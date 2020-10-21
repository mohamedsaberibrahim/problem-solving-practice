class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while(x != 0){
            if((((result* 10) + x%10) > INT_MAX) || (((result* 10) + x%10) < INT_MIN)){
                return 0;
            }
            else{
                result = (result* 10) + x%10;
                x = x/10;
            }
            
        }
        return result;
    }
};