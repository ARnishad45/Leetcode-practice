class Solution {
public:
    int climbStairs(int n) {
       if(n < 1) return 0;
       if(n < 2) return 1;
       if(n < 3) return 2;
        
       int onestep_before = 2;
       int twostep_before = 1;
       int all_ways = 0;
        
       for(int i = 2; i < n; i++){
           all_ways = onestep_before + twostep_before;
           twostep_before = onestep_before;
           onestep_before = all_ways;
       }
        return all_ways;
    }
};