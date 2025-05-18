class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element;
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (counter == 0) {
                counter++;
                element = nums[i];
            } else if (element == nums[i]) {
                counter++;
            } else {
                counter--;
            }
        }
        int bag = 0;
        for (int i = 0; i < n; i++) {
            if (element == nums[i]) {
                bag++;
            }
            if (bag > nums.size() / 2) {
                return element;
            }
        }
        return -1;
    }
};
