class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int rotation = 0; rotation < 4; rotation++) {
            // Check if mat matches target
            if (mat == target)
                return true;

            // Transpose
            int n = mat.size();
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (i < j) {
                        swap(mat[i][j], mat[j][i]);
                    }
                }
            }

            // Reverse each row
            for (int i = 0; i < n; i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
        }

        return false;
    }
};
