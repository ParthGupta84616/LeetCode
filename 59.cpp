class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int m = n;
        int top = 0, right = m - 1;
        int bottom = n - 1, left = 0;
        vector<vector<int>> ans(n, vector<int>(n));
        int bag = 1;

        while (left <= right && top <= bottom) {
            // top -> right
            for (int i = left; i <= right; i++) {
                ans[top][i] = bag++;
            }

            top++;

            for (int i = top; i <= bottom; i++) {
                ans[i][right] = bag++;
            }

            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = bag++;
                }

                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = bag++;
                }
                left++;
            }
        }

        return ans;
    }
};
