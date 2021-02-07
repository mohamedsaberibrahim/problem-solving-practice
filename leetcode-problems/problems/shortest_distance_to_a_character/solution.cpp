class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>result(s.length());
        
        
        int i = 0;
        while(i < s.length()) {
            int next = s.find(c, i);
            int previous = s.rfind(c, i);
            if(previous != -1 && next - i > i - previous)
                result[i] = i - previous;
            else if(next == -1)
                result[i] = i - previous;
            else if(previous == -1 || next - i <= i - previous)
                result[i] = next - i;
            cout << i << " -> "<< next << " " << previous << " " << result[i] << endl;
            i++;
        }
        return result;
    }
};