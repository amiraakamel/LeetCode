class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long index = 0;
        long long sum = accumulate(chalk.begin(),chalk.end(),0LL);
        k = k%sum;
        for(int i = 0 ; i<chalk.size() ; i++){
            if(k>=chalk[i]){
                    k -=chalk[i];
                }else{
                    index = i;
                    break;
                }
        }

        return index;

    }
    
};