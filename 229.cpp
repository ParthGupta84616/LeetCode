class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> map;
        int count = (int)nums.size() / 3 + 1;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            if (map[nums[i]] == count) {
                res.push_back(nums[i]);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
