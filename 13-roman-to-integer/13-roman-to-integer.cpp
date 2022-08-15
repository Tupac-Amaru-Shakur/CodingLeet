class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int tot=0;
        if(s.size()==1){
            return mp[s[0]];
        }
        for(int i=0;i<s.size()-1;i++){
            if(mp[s[i]]<mp[s[i+1]])
            {
                int t=mp[s[i+1]]-mp[s[i]];
                tot+=t;
                i++;
            }
            else{
                tot+=mp[s[i]];
            }
        }
        
        if(mp[s[s.size()-2]]>=mp[s[s.size()-1]]){
            tot+=mp[s[s.size()-1]];
        }
        
        return tot;
        
        
    }
};