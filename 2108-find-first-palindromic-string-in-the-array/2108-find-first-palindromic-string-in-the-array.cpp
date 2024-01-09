class Solution {
    bool ispalindrome(string str){
        int left = 0, right =str.length()-1;
        while(left <= right){
            if(str[left] != str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
       for(int i  = 0; i < words.size(); i++){
            if(ispalindrome(words[i]))
               return words[i];
           }
        return "";
       } 
    };
