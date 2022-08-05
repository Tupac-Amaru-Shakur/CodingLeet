class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<uint>ans(target+1);
        ans[0]=1;
        for(int i=1;i<=target;i++){
            for(auto &j:nums){
                if(j<=i){
                    ans[i]+=ans[i-j];
                }
            }
        }
        
        return ans[target];
    }
};