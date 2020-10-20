class Solution {
public:
    
    char static asciitolower(char in) {
        if (in <= 'Z' && in >= 'A')
            return in - ('Z' - 'z');
        return in;
    }


    string preprocess(string str){
        string temp = "";
        for (int i = 0; i < str.size(); ++i) {
            if (isalnum(str[i])) {
                temp = temp + str[i];
            }
        }
        str = temp;
        std::transform(str.begin(), str.end(), str.begin(), asciitolower);
	    return str;
    }
    bool isPalindrome(string s) {
        //string s_processed = preprocess(s);
        //cout<<s_processed<<endl;
        string s_processed = "";
        for(int i =0;i<s.length();i++){
            if(isalnum(s[i])){
                s_processed += asciitolower(s[i]);
            }
        }
        for(int i =0;i<s_processed.length()/2;i++){
            int i_last = s_processed.length() - (i+1);
            if(s_processed[i] != s_processed[i_last]){
                return false;
            }
        }
        return true;
    }
};