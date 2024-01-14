class Solution {
public:
    int sumOfDivisor(vector<int>& nums, int div){
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum += ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = -1;
        int maxi = *max_element(nums.begin(), nums.end());
        
        int low = 1, high = maxi;
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(sumOfDivisor(nums,mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};