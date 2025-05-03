class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i < j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        };
        for (int p = 0; p < matrix.size(); p++) {
            reverse(matrix[p].begin(), matrix[p].end());
        }
    }
};
