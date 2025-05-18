class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int bag = 0;
        int newbag = 0;

        for (int i = 0; i <= n - 1; i++) {
            if (nums[i] == 0) {
                if (bag < newbag) {
                    bag = newbag;
                }
                newbag = 0;
                cout << bag;
            } else {
                newbag++;
            }
        };

        if (bag < newbag) {
            bag = newbag;
        }

        return bag;
    }
};
