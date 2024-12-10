class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // counting violations in array, can only be 1 for true
        
        for(int i = 1; i < n; i++) { // running loop from 2nd position to end
            if(nums[i-1] > nums[i]) {
                count += 1; // counting number of violations
            }
        }
        if(nums[n-1] > nums[0]) { // last element should be smaller than 1st 
            count += 1;
        }
        return count <= 1; // returning true when less than or equal to 1
    }
};
