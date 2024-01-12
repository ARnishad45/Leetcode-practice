class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, n = nums.size(), high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(nums[mid] == target)
                return true;
            //1st , last and mid are equal
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }
            
            //left
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            //right 
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid+1;
                }
                else
                    high = mid-1;
            }
        }
        return false;
    }
};