class Solution {
public:
    int minPartitions(string n) {
        int maxNum=0;
        for(auto&i:n){
            maxNum=max(maxNum,i-'0');
        }
        return maxNum;
        
    }
};