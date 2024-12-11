class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxcount = 0, answer;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                maxcount = max(maxcount,count);
                count = 0;
            }
        }
        answer = max(maxcount,count);
        return answer;
    }
};