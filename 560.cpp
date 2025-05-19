class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            int total = 0;
            for (int j = i; j >= 0; j--) {
                total += nums[j];
                if (total == k) {
                    res++;
                }
            }
        }

        return res;
    }
};
