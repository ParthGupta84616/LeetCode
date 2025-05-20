class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxelement = *max_element(nums.begin(), nums.end());
        vector<int> maxIndex;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxelement) {
                maxIndex.push_back(i);
            }

            int count = maxIndex.size();
            if (count >= k) {
                sum += maxIndex[count - k] + 1;
            }
        }

        return sum;
    }
};
