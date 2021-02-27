class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> stonesMap = stringToMap(stones);
        int ownedJewels = getOwnedJewels(jewels, stonesMap);
        return ownedJewels;
    }
    
    map<char, int> stringToMap(string input) {
        map<char, int>mappedValues;
        for(int i = 0; i < input.length(); i++) {
            if(mappedValues[input[i]]) {
                mappedValues[input[i]]++;
            }
            else {
                mappedValues[input[i]] = 1;
            }
        }
        return mappedValues;
    }
    
    int getOwnedJewels(string jewels, map<char, int> stones) {
        int result = 0;
        for(int i = 0; i < jewels.length(); i++) {
            if(stones[jewels[i]])
                result += stones[jewels[i]];
        }
        return result;
    }
};