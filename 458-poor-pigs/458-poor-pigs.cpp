class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        int res=minutesToTest/minutesToDie;
        return ceil(log(buckets)/log(minutesToTest/minutesToDie+1));
        
    }
};