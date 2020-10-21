class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        bool isNegative = false;
        int i =0;
        while(i<s.length() && s[i]==' ')
            i++;
        
        int sign = 1;
        if((i<s.length())&&((s[i]=='-')||(s[i]=='+'))){
            sign = (s[i++]=='-')? -1 : 1;
        }
        
        while(i<s.length() &&isdigit(s[i])){
            if(result > INT_MAX / 10 ||(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
                
                return sign==1? INT_MAX: INT_MIN;
            }
            result = (result*10) + (s[i] - '0');
            i++;
        }

        if(sign == -1)
            result = -result;
        if(result > INT_MAX){
            return INT_MAX;
        }
        else if(result < INT_MIN){
            return INT_MIN;
        }
    return result;
    }
};