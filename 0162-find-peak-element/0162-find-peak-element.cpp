class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0, mid, high = nums.size()-1, n = nums.size();
        int ans = -1;
        while(low <= high){
            mid = low + (high-low)/2;
            if(mid == n-1 || nums[mid] > nums[mid+1]){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};