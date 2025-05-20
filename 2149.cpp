class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int positive = 0;
        int negative = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[2 * positive] = nums[i];
                positive++;
            } else if (nums[i] < 0) {
                ans[2 * negative - 1] = nums[i];
                negative++;
            }
        }
        return ans;
    }
};
