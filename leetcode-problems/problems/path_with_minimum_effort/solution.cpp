
struct S
{
    int m_n1;
 int m_n2;
 int m_n3;
 
 S(int n1, int n2, int n3) : m_n1(n1), m_n2(n2), m_n3(n3)
 {
 }
bool operator<(const struct S& other) const
{
return m_n1 < other.m_n1;
}
};
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int R = heights.size();
        int C = heights[0].size();
        vector<vector<int>> dp(R, vector<int>(C, INT_MAX));
        priority_queue<S> q;
        q.push(S(0,0,0));
        vector<int> dirs{1,0,-1,0,1};
        // cout << "start" << endl;
        while (q.size()) {
            auto t = q.top(); q.pop();
            int h = -t.m_n1, x = t.m_n2, y = t.m_n3;
            // cout << h << " " << x << " " << y << endl;
            if (x == R-1 and y == C-1) return h;
            for (int i=0; i<4; i++) {
                int nx = x + dirs[i];
                int ny = y + dirs[i+1];
                if (nx>=0 and nx<R and ny>=0 and ny<C and (max(h, abs(heights[nx][ny]-heights[x][y])))<dp[nx][ny]) {
                    q.push(S(-max(h, abs(heights[nx][ny]-heights[x][y])), nx, ny));
                    dp[nx][ny] = max(h, abs(heights[nx][ny]-heights[x][y]));
                }
            }
        }
        return -1;
    }
};