class KthLargest {
    priority_queue <int , vector<int> , greater<int>>pr;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(auto n : nums){
            pr.push(n);
        }
        while(pr.size()>K){
            pr.pop();
        }
    }
    
    int add(int val) {
        pr.push(val);
        if(pr.size()>K){
            pr.pop();
        }
        return pr.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */