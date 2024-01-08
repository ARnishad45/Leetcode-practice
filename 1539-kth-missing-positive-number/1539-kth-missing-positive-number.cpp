class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size(), mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (arr[mid] - 1 - mid < k)
                l = mid + 1;
            else
                r = mid;
        }
        return l + k;
    }
};