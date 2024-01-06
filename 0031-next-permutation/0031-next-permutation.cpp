class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;

        // Find the first element that breaks descending order
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            int j = nums.size() - 1;

            // Find the smallest element to the right of i that is larger than i
            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};