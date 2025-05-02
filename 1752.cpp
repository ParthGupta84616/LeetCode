class Solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            if (n <= 1)
                return true;
    
            int bag = 0;
    
            for (int i = 0; i <= n - 1; i++) {
                if (nums[(i + 1) % n] < nums[i]) {
                    bag++;
                    if (bag > 1)
    
                        return false;
                }
            }
    
            return true;
        };
    };