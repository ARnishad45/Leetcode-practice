class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        while(i < n && j < m){
           if(i > 0 &&  nums1[i-1] == nums1[i]){ // if we have already checked and traversed the nums[i-1] before and its same as previous. So we can skip this:
                i++;
                continue;
            }
            
            if(nums1[i] < nums2[j]){
                 i++;   
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{ // If we found intersecting/common elements
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};