class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int start = -1, end = -1;
        for (int i = 0; i < intervals.size(); i++) {
            if (intervals.empty() || start == -1 || end == -1) {
                start = intervals[i][0];
                end = intervals[i][1];
            } else {
                if (end >= intervals[i][0]) {
                    end = max(end, intervals[i][1]);
                    start = min(start, intervals[i][0]);
                } else {
                    ans.push_back({start, end});
                    start = intervals[i][0];
                    end = intervals[i][1];
                }
            }
        }
        if (ans.empty() || ans.back() != vector<int>{start, end}) {
            ans.push_back({start, end});
        }
        return ans;
    }
};
