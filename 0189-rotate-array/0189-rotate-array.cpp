class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k!=0){        
            reverse(nums.end() - k, nums.end()); // reverse from k to end
            reverse(nums.begin(), nums.end() - k); // reverse from begin to k
            reverse(nums.begin(), nums.end()); //reverse whole array
        }
    }
};