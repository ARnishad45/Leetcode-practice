class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        
        for(int element=0; element<nums.size(); element++){
            if(nums[element] != 0){
                swap(nums[index],nums[element]);
                index++;
            }
        }
    }
};