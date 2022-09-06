class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        if(strs.size()==0)return ans;
//         set<int>st;
        
//         map<string,int>mp;
//         for(auto &i: strs){
//             int s=0;
//             for(int j=0;j<i.size();j++){
//                 s+=i[j]-'a';
//             }
            
//             mp[i]=s;
//             st.insert(s);
//         }
        
//         for(auto &i:st){
//             vector<string>temp;
//             for(auto &j:mp){
//                 if(j.second==i){
//                     temp.push_back(j.first);
//                 }
//             }
//             ans.push_back(temp);
//         }
        
//         return ans;
        
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        
        for(auto i:strs){
            string temp=i;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
        
    }
};