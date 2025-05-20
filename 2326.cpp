/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode* current = head;
        int top = 0, right = n - 1;
        int bottom = m - 1, left = 0;
        vector<vector<int>> ans(m, vector<int>(n));

        while (left <= right && top <= bottom) {
            // top -> right
            for (int i = left; i <= right; i++) {
                if (current != nullptr) {
                    ans[top][i] = current->val;
                    current = current->next;
                } else {
                    ans[top][i] = -1;
                }
            }

            top++;

            for (int i = top; i <= bottom; i++) {
                if (current != nullptr) {
                    ans[i][right] = current->val;
                    current = current->next;
                } else {
                    ans[i][right] = -1;
                }
            }

            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    if (current != nullptr) {
                        ans[bottom][i] = current->val;
                        current = current->next;
                    } else {
                        ans[bottom][i] = -1;
                    }
                }

                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    if (current != nullptr) {
                        ans[i][left] = current->val;
                        current = current->next;
                    } else {
                        ans[i][left] = -1;
                    }
                }
                left++;
            }
        }

        return ans;
    }
};
