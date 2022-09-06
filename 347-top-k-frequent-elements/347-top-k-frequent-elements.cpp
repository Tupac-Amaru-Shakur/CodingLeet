class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        set<int>s;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto i:nums){
            mp[i]++;
            
        }
        
        for(auto i:mp){
            pq.push(make_pair(i.second,i.first));
            
            
        }
        
        
        
        
        for(auto i:s){
            ans.push_back(i);
        }
        
        for(int i=0;i<k;i++){
             auto x=pq.top();
            ans.push_back(x.second);
            pq.pop();
        }
        return ans;
    }
};