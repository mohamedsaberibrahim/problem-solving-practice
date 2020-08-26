class Solution {
public:
    bool isValid(string s) {
        stack <char> openParentheses; 
        if((s.length() == 1)||( s[0] == ')' )||( s[0] == ']' )||( s[0] == '}' )) return false;
        for(int i=0; i< s.length();i++){
            if(( s[i] == '(' )||( s[i] == '[' )||( s[i] == '{' )){
                openParentheses.push(s[i]);
            }
            else if( s[i] == ')' ){
                if ((openParentheses.size() > 0)&&(openParentheses.top() == '(')){
                    openParentheses.pop();
                }
                else{
                    return false;
                }
            }
            else if((openParentheses.size() > 0)&& (s[i] == ']') ){
                if(openParentheses.top() == '['){
                    openParentheses.pop();
                }
                else{
                    return false;
                }
            }
            else if((openParentheses.size() > 0)&&( s[i] == '}' )){
                if(openParentheses.top() == '{'){
                    openParentheses.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(openParentheses.size() > 0){
            return false;
        }
        else{
            return true;
        }
    }
};