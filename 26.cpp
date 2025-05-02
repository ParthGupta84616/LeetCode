class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int index = 1;
            for (int i = 1; i <= n - 1; i++) {
                if (nums[i] == nums[i - 1]) {
    
                } else {
                    nums[index] = nums[i];
                    index++;
                }
            }
            return index;
        }
    };
    
    