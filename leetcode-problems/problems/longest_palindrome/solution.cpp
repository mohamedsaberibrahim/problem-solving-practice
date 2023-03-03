#include <map>

class Solution {
public:
    int longestPalindrome(string s) {
        std::map<char, int> charOccurence;
        int longestPalindrome = 0;

        for (int i = 0; i< s.length(); i++) {
            if (charOccurence[s[i]] == 1) {
                charOccurence[s[i]] = 0;
                longestPalindrome+= 2;
            } else {
                charOccurence[s[i]] = 1;
            }
        }

        std::map<char, int>::iterator it = charOccurence.begin();

        while (it != charOccurence.end())
        {
            if (it->second == 1) {
                longestPalindrome += 1;
                break;
            }
            ++it;
        }

        return longestPalindrome;
    }
};