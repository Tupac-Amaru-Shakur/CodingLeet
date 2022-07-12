class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(begin(nums),end(nums));
        // int i=0;
        int j=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<j;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                return {mp[target-nums[i]],i};
            }
            mp[nums[i]]=i;
            
        }
        return {};
    }
};