class Solution {
   public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n));

        // Only 1 way to "reach" starting cell
        dp[0][0] = 1;

        // Initializing base case (only 1 way to reach a cell in same row/column as starting cell)
        for (int i = 1; i < m; i++) dp[i][0] = 1;
        for (int j = 1; j < n; j++) dp[0][j] = 1;

        // Computing number of ways to reach each cell from (0,0)
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }
};