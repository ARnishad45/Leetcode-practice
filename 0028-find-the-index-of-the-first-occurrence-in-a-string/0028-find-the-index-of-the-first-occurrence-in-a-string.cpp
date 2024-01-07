class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        for(int i = 0; i < n-m+1; i++){
            int j = 0;
            while(haystack[i+j] == needle[j] && j < m)
                j++;
            if(j == m)
                return i;
        }
        return -1;
    }
};