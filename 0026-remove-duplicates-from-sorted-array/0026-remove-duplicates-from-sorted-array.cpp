class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; //first element
        for(int j = 1; j < nums.size(); j++){ //j will be at 2nd element position
            if(nums[j] != nums[i]){ //if next != first element
                nums[i+1] = nums[j]; //us element ko 2nd position me rakh do
                i++; // move the pointer to the new element position
            }
        }
        return (i+1); // return unique elements(+1 due to 0 based indexing)
    }
};