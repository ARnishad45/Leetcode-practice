class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int left = 0, right = 0;
        
        while(left < size(nums1) && right < size(nums2)){
            if(nums1[left] < nums2[right]) 
                left++;
            else if(nums1[left] > nums2[right]) 
                right++;
            else return nums1[left];
        }
      return -1;
    }
};