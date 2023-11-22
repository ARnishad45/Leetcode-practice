class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum;
        sum = n*(n+1)/2; // sum of whole numbers
        int current_sum = 0;
        for(int i = 0; i < n; i++){
            current_sum += nums[i];
        }
        return (sum - current_sum);
    }
};