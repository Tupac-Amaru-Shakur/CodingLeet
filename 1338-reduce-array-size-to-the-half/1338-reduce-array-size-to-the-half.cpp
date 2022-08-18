class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        priority_queue<int> pq;
        int ans=0;
        int del=0;
        
        
        
        for(auto &i:arr){
            mp[i]++;
            
        }
        
        for(auto &i:mp){
            pq.push(i.second);
        }
        
        
        while(del<arr.size()/2){
            del+=pq.top();
            pq.pop();
            ans++;
        }
        
        return ans;
    }
};