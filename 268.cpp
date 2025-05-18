class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int flag = true;
        for (int i = 0; i <= n - 1; i++) {
            sum -= nums[i];
            if (nums[i] == 0) {
                flag = false;
            }
        }
        if (flag) {
            return 0;
        }
        if (sum == 0) {
            return n + 1;
        }
        return sum;
    }
};
