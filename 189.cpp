class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reverseArray(nums, 0, n - k - 1);
        reverseArray(nums, n - k, n - 1);
        reverseArray(nums, 0, n - 1);
    }

    void reverseArray(vector<int>& arr, int low, int high) {
        while (low < high) {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
};
