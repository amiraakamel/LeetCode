class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int size = arr.size(); 
        vector<int> arr2(size);
        
        for(int i=0 ; i<size ; i++){
            arr2[i]=arr[i];
        }
        
        sort(arr2.begin(),arr2.end());
        unordered_map<int,int>mp;

        int counter = 1;
        for(int i=0 ; i<size ; i++){
            if(mp.find(arr2[i])==mp.end()){
                mp[arr2[i]] = counter;
                counter++;
            }
        }
        
        for(int i=0 ; i<size ; i++){
            arr[i] = mp[arr[i]];
        }
        
        return arr;
    }
};