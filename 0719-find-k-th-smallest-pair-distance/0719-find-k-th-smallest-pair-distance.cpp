class Solution {
public:
    int count(int dist,vector<int>& nums){
        int cnt = 0;
        for(int ed = 0 ; ed < nums.size() ;ed++){ 
            auto st = lower_bound(nums.begin(),nums.begin()+ed+1,nums[ed]-dist) - nums.begin();
            cnt+= ed - st;
        }
        return cnt;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int st = 0, ed = nums.back() - nums[0],cur = -1,md;
        while(st<=ed){ 
            md =(st+ed)/2;  
            if(count(md,nums) >= k){
                cur = md;
                ed = md - 1;
            }
            else st = md + 1;
        }
        return cur;
    }
};