class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sumM = 0;
        for(int i = 0 ; i<rolls.size() ; i++){
            sumM +=rolls[i];
        }
        int sumN = mean*(n+m)-sumM;
        
        if(sumN>n*6 || sumN<n){
            return {};
        }
        
        auto [q,r] = div(sumN,n);
        vector<int>v(n,q);  //this to fill all the victor with sumN/n value automatic
        
        fill(v.begin(),v.begin()+r,q+1); //for the remaining we will replace it with a bigger value
        
        return v;
        
    }
};