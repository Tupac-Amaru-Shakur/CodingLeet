class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto &i:s){
            mp[i]++;
        }
        for(auto &i:t){
            mp[i]-=1;
        }
        int ss=0;
        for(auto &i:mp){
            if(i.second!=0)
                return false;
        }
//         if(ss==0)
//         {
//             return true;
            
//         }
        return true;
    }
};