class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int max_so_far = nums[0];
        int current_max_product = nums[0];
        int current_min_product = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int num = nums[i];
            int temp_max = current_max_product;
            current_max_product = max({num, num * temp_max, num * current_min_product});
            current_min_product = min({num, num * temp_max, num * current_min_product});
            max_so_far = max(max_so_far, current_max_product);
        }

        return max_so_far;
    }
};
