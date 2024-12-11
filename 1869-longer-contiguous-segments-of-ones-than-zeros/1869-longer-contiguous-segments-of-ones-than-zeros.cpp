class Solution {
public:
    bool checkZeroOnes(string s) {
        int zerosCount = 0, onesCount = 0, maxZeros = 0, maxOnes = 0;
        int n = s.length();
        
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                zerosCount++;
                maxZeros = max(maxZeros,zerosCount);
                onesCount = 0;
            }
            else if(s[i] == '1'){
                onesCount++;
                maxOnes = max(maxOnes,onesCount);
                zerosCount = 0;
            }
        }
        return maxOnes > maxZeros;
    }
};