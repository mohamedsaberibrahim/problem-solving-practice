class Solution {
public:
    bool isValid(string s) {
        stack<char>Parentheses;
        for(int i = 0; i < s.length(); i++) {
            if(isOpenBracket(s[i])) {
                Parentheses.push(s[i]);
            }
            else {
                if(Parentheses.size() > 0 && isPair(Parentheses.top(), s[i])) {
                    Parentheses.pop();
                }
                else {
                    Parentheses.push(s[i]);
                }
            }
        }
        if (Parentheses.size() == 0)
            return true;
        return false;
    }
    
    bool isOpenBracket(char c) {
        
        // Checks if c is open ['(', '[', '{']
        if(c == '(' || c == '[' || c == '{') {
            return true;
        }
        else {
            return false;
        }
    }
    
    bool isPair(char c1, char c2) {
        if (c1 == '(' && c2 == ')')
            return true;
        else if (c1 == '[' && c2 == ']') {
            return true;
        }
        else if (c1 == '{' && c2 == '}') {
            return true;
        }
        else {
            return false;
        }
    }
};

