class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten  = 0;
        for(int rs : bills){
            if(rs == 5){
                five++;
            }
            else if(rs == 10){
                ten++;
                five--;
            }
            else{
                if(ten > 0){
                    ten--;
                    five--;
                }
                else{
                    five -= 3;
                }
            }
            if(five < 0)
                return false;
        }
        return true;
    }
};
