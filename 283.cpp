class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for (int i = 0; i <= n - 1; i++) {
            if (nums[i] == 0) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int j = index + 1; j <= n - 1; j++) {
                if (nums[j] != 0) {
                    swap(nums[j], nums[index]);
                    index++;
                }
            }
        }
    }
};
