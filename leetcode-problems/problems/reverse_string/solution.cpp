class Solution {
public:
    void swap(char& s1, char& s2){
        char temp = s1;
        s1 = s2;
        s2 = temp;
        return;
    }
    void reverseString(vector<char>& s) {
        for(int i =0; i< s.size()/2;i++){
            int reverse_i = s.size() - (i+1);
            swap(s[i], s[reverse_i]);
        }
        return;
    }
};