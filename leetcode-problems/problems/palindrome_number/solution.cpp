class Solution {
public:
    bool isPalindrome(int x) {
        return isStrPalindrome(to_string(x));
    }
    
    bool isStrPalindrome(string x){

        if (x.length() == 1){
            return true;
        }
        else if (x.length() == 2){
            if(x[0] == x[1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(x[0] == x[x.length() - 1])
            {
                //cout<< x.substr(1, result.length() - 2)<< endl;
                return isStrPalindrome(x.substr(1, x.length() - 2));
            }
            else
            {
                return false;
            }
        }
    }
};