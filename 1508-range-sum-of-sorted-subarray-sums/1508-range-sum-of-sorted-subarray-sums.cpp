class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector <long long> pre;
        for(int i = 0 ; i<n ; ++i){
            long long sum = 0;
            for(int j = i ; j<n ; j++){
               sum += nums[j];
               pre.push_back(sum);
            }
        }
        sort(pre.begin(),pre.end());
        int ans = 0  , mod = 1e9 + 7;;
        for(int i = left-1 ; i<right ; ++i){
            ans = (ans+pre[i])%mod;
        }
        return ans;
    }
};      