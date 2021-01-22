class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if (word1.length() != word2.length()) {
            return false;
        }
        
        sortInPlace(word1);
        sortInPlace(word2);
        
        if (isIdenticalStrings(word1, word2))
            return true;
        
        map<char, int>freq1 = getFrequency(word1);
        map<char, int>freq2 = getFrequency(word2);
        
        vector<char> freq1_keys = getSortedKeys(freq1);
        vector<char> freq2_keys = getSortedKeys(freq2);
        
        vector<int> freq1_values = getSortedValues(freq1);
        vector<int> freq2_values = getSortedValues(freq2);
        
        if(freq1_keys == freq2_keys && freq1_values == freq2_values) 
            return true;
        
        return false;
    }
    
    string sortInPlace(string& word) {
        
        sort(word.begin(), word.end());
        return word;
        
    }
    
    map<char, int> getFrequency(string word) {
        map<char, int> freq;
        
        for(int i = 0; i < word.length(); i++) {
            
            if(freq[word[i]])
                freq[word[i]]++;
            else
                freq[word[i]] = 1;
            
        }
        return freq;
    }
    
    bool isIdenticalStrings(string word1, string word2) {
        
        for(int i = 0; i < word1.length(); i++) {
            
            if(word1[i] != word2[i])
                return false;
            
        }
        
        return true;
    }
    
    vector<char> getSortedKeys(map<char, int> m) {
        
        std::vector<char> keys;
        
        for(std::map<char, int>::iterator it = m.begin(); it != m.end(); ++it) {
          keys.push_back(it->first);
        }
        
        sort(keys.begin(), keys.end());
        
        return keys;
    }
    
    vector<int> getSortedValues(map<char, int> m) {
        
        std::vector<int> values;
        
        for(std::map<char, int>::iterator it = m.begin(); it != m.end(); ++it) {
          values.push_back(it->second);
        }
        
        sort(values.begin(), values.end());
        
        return values;
    }

};