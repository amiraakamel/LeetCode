class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>freq(k);
        for(auto it : arr){
            freq[(it%k+k)%k]++;
        }
        if(freq[0]&1){
            return false;
        }

        for(int i=1 ; i<k ; i++){
            if(freq[i] != freq[k-i]){
                return false;
            }
        }

        return true;
    }
};
