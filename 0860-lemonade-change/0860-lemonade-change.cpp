class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCounter = 0, tenCounter = 0;
        
        for(int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                fiveCounter++;
            } else if (bills[i] == 10) {
                if (fiveCounter == 0) {
                    return false; 
                }
                fiveCounter--;
                tenCounter++;
            } else if (bills[i] == 20) {
                if (tenCounter > 0 && fiveCounter > 0) {
                    tenCounter--;
                    fiveCounter--;
                } else if (fiveCounter >= 3) {
                    fiveCounter -= 3;
                } else {
                    return false; 
                }
            }
        }
        return true; 
    }
};