class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                index = i;
            }
        };
        if (index == -1) {
            return reverse(nums.begin(), nums.end());
        };
        for (int j = n - 1; j > index; j--) {
            if (nums[index] < nums[j]) {
                swap(nums[index], nums[j]);
                break;
            }
        }

        return reverse(nums.begin() + index + 1, nums.end());
    }
};
