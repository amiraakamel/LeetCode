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
        
        vector<int>v(n);
        int q = sumN/n , r = sumN%n;
        for(int i = 0 ; i<n ; i++){
            v[i]=q;
        }
        for(int i = 0 ; i<r ; i++){
            v[i]=q+1;
        }
        return v;
        
    }
};