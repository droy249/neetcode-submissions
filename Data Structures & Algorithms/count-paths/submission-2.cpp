class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> row(n, 1);

        for(int i = 1; i < m; i++) {
            vector<int> nextRow(n,1);

            for(int j = 1; j < n; j++) {
                nextRow[j] = nextRow[j-1] + row[j];
            }

            row = nextRow;
        }

        return row.back();
    }
};