class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int low = 0, high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else{
                    ans = (ans,nums[mid]);
                    high = mid - 1;
            }
        }
        return ans;
    }
};